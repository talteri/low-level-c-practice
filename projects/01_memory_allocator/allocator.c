#include "allocator.h"
#include <unistd.h> // for sbrk()
#include <string.h> // for memset()
#include <stdio.h>  // for debugging (printf)

struct block_meta
{
    size_t size;
    int free;
    struct block_meta *next;
};

#define META_SIZE sizeof(struct block_meta)
static struct block_meta *global_base = NULL;

/* Utility: Find a free block */
struct block_meta *find_free_block(struct block_meta **last, size_t size)
{
    struct block_meta *current = global_base;
    while (current && !(current->free && current->size >= size))
    {
        *last = current;
        current = current->next;
    }
    return current;
}

/* Utility: request space from OS*/
struct block_meta *request_space(struct block_meta *last, size_t size)
{
    struct block_meta *block;
    block = sbrk(0);
    void *request = sbrk(size + META_SIZE);
    if (request == (void *)-1)
    {
        return NULL; // Failed to allocate
    }
    if (last)
    {
        last->next = block;
    }

    block->size = size;
    block->next = NULL;
    block->free = 0;
    return block;
}

/* Utility: Split a block */
void split_block(struct block_meta *block, size_t size)
{
    if (block->size <= size + META_SIZE)
        return; // Not enough space to split

    struct block_meta *new_block = (void *)((char *)block + META_SIZE + size);
    new_block->size = block->size - size - META_SIZE;
    new_block->free = 1;
    new_block->next = block->next;

    block->size = size;
    block->next = new_block;
}

/* Utility: Merge adjacent free blocks */
void merge_free_blocks()
{
    struct block_meta *current = global_base;
    while (current && current->next)
    {
        if (current->free && current->next->free)
        {
            current->size += META_SIZE + current->next->size;
            current->next = current->next->next;
        }
        else
        {
            current = current->next;
        }
    }
}

void *my_malloc(size_t size)
{
    struct block_meta *block;

    if (size <= 0)
        return NULL;

    if (!global_base)
    {
        // First call
        block = request_space(NULL, size);
        if (!block)
            return NULL;
        global_base = block;
    }
    else
    {
        struct block_meta *last = global_base;
        block = find_free_block(&last, size);
        if (!block)
        {
            // No free block found, request more memory
            block = request_space(last, size);
            if (!block)
                return NULL;
        }
        else
        {
            // Reuse freed block
            block->free = 0;
        }
    }

    return (block + 1);
}

struct block_meta *get_block_ptr(void *ptr)
{
    return (struct block_meta *)ptr - 1;
}

void my_free(void *ptr)
{
    if (!ptr)
        return;

    struct block_meta *block_ptr = get_block_ptr(ptr);
    block_ptr->free = 1;
    merge_free_blocks();
}

/* Print current heap layout for debugging */
void print_heap_layout()
{
    printf("\n[Heap Layout]\n");
    struct block_meta *current = global_base;
    int index = 0;
    while (current)
    {
        printf("Block %d -> size: %zu, free: %d\n",
               index, current->size, current->free);
        current = current->next;
        index++;
    }
    printf("\n");
}