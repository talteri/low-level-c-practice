#include <stdio.h>
#include <stdlib.h>

#include "error_utils.h"

int main(void)
{
    char *copy = NULL;
    eu_error_t err = eu_string_duplicate("Apple", &copy);

    if (err != EU_OK)
    {
        printf("string_duplicate failed: %s\n", eu_error_to_string(err));
        return 1;
    }

    printf("copy = %s\n", copy);
    free(copy);
    copy = NULL;

    int values[] = {4, 9, -2, 7};
    int min_value = 0;

    err = eu_array_min(values, 4, &min_value);
    if (err != EU_OK)
    {
        printf("array_min failed: %s\n", eu_error_to_string(err));
        return 1;
    }

    printf("min = %d\n", min_value);

    return 0;
}