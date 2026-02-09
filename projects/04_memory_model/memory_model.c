#include <stdio.h>
#include <stdlib.h>

static int compute_on_stack(void)
{
    int value = 40;
    value += 2;
    return value;
}

static int *compute_on_heap(void)
{
    int *value = malloc(sizeof(int));
    if (!value)
    {
        return NULL;
    }

    *value = 40;
    *value += 2;
    return value;
}

int main(void)
{
    int stack_result = compute_on_stack();
    printf("Result on stack: %d\n", stack_result);

    int *heap_result = compute_on_heap();
    if (heap_result)
    {
        printf("Result on heap: %d\n", *heap_result);
        free(heap_result);
        heap_result = NULL;
    }
    else
    {
        fprintf(stderr, "Failed to allocate memory on heap\n");

        return 0;
    }
}
