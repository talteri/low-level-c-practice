#include <stdio.h>
#include <stdlib.h>
#include "string_utils.h"

int main(void)
{
    const char *name = "Tal";
    printf("Length of name: %zu\n", su_length(name));
    printf("Number of 'a' in name: %zu\n", su_count_char(name, 'a'));

    char *name_copy = NULL;
    if (su_duplicate(name, &name_copy))
    {
        printf("Duplicate of name: %s\n", name_copy);
        free(name_copy); // Remember to free the allocated memory
    }
    else
    {
        fprintf(stderr, "Failed to duplicate name.\n");
    }

    int values[] = {5, 10, 2, 8, 3};
    int min_value = 0;
    if (su_array_min(values, 5, &min_value))
    {
        printf("Minimum value in array: %d\n", min_value);
    }
    else
    {
        fprintf(stderr, "Failed to find minimum value in array.\n");
    }

    printf("starts_with(\"Apple C\", \"Apple\") = %s\n",
           su_starts_with("Apple C", "Apple") ? "true" : "false");
    printf("starts_with(\"Apple C\", \"Aple\") = %s\n",
           su_starts_with("Apple C", "Aple") ? "true" : "false");

    return 0;
}
