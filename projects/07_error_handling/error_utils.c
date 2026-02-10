#include <stdlib.h>

#include "error_utils.h"

eu_error_t eu_string_duplicate(const char *src, char **out_copy)
{
    if (src == NULL || out_copy == NULL)
    {
        return EU_NULL_POINTER;
    }

    *out_copy = NULL;
    size_t len = 0;
    while (src[len] != '\0')
    {
        len++;
    }

    char *copy = malloc(len + 1);
    if (copy == NULL)
    {
        return EU_OUT_OF_MEMORY;
    }

    for (size_t i = 0; i < len; i++)
    {
        copy[i] = src[i];
    }
    copy[len] = '\0';
    *out_copy = copy;
    return EU_OK;
}

eu_error_t eu_array_min(const int *arr, size_t len, int *out_min)
{
    if (arr == NULL || out_min == NULL)
    {
        return EU_NULL_POINTER;
    }
    if (len == 0)
    {
        return EU_EMPTY_INPUT;
    }

    int min = arr[0];
    for (size_t i = 1; i < len; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    *out_min = min;
    return EU_OK;
}

const char *eu_error_to_string(eu_error_t error)
{
    switch (error)
    {
    case EU_OK:
        return "Success";
    case EU_NULL_POINTER:
        return "Null pointer";
    case EU_EMPTY_INPUT:
        return "Empty input";
    case EU_OUT_OF_MEMORY:
        return "Out of memory";
    default:
        return "Unknown";
    }
}