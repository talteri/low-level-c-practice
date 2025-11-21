#ifndef ALLOCATOR_H
#define allocator_h

#include <stddef.h> // for size_t

void *my_malloc(size_t size);
void my_free(void *ptr);
void print_heap_layout();

#endif // ALLOCATOR_H