#include <stdio.h>
#include "allocator.h"

int main()
{
    printf("Costume malloc/free memory demo:\n");

    int *a = (int *)my_malloc(5 * sizeof(int));
    double *b = (double *)my_malloc(10 * sizeof(double));
    char *c = (char *)my_malloc(50 * sizeof(char));

    for (int i = 0; i < 5; i++)
    {
        a[i] = i * 10;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d\n", i, a[i]);
    }

    print_heap_layout();

    my_free(b);
    print_heap_layout();

    my_free(a);
    my_free(c);
    print_heap_layout();

    printf("Memory freed successfully!\n");
    return 0;
}