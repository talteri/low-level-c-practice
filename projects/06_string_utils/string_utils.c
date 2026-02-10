#include "string_utils.h"

#include <stdlib.h>

// Private helper: visible only within this file
static bool is_null_or_empty(const char *s)
{
    return s == NULL || s[0] == '\0';
}

size_t su_length(const char *s)
{
    if (is_null_or_empty(s))
    {
        return 0;
    }
    size_t len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    return len;
}

size_t su_count_char(const char *s, char target)
{
    if (is_null_or_empty(s))
    {
        return 0;
    }
    size_t count = 0;
    for (size_t i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == target)
        {
            count++;
        }
    }
    return count;
}

bool su_duplicate(const char *src, char **out_copy)
{
    if (is_null_or_empty(src) || out_copy == NULL)
    {
        return false;
    }
    size_t len = su_length(src);
    char *copy = malloc(len + 1); // +1 for null terminator
    if (copy == NULL)
    {
        return false; // allocation failed
    }

    for (size_t i = 0; i < len; i++)
    {
        copy[i] = src[i];
    }

    copy[len] = '\0'; // null terminate the string
    *out_copy = copy;
    return true;
}

bool su_array_min(const int *arr, size_t len, int *out_min)
{
    if (arr == NULL || out_min == NULL || len == 0)
    {
        return false;
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
    return true;
}

bool su_starts_with(const char *s, const char *prefix)
{
    if (is_null_or_empty(s) || is_null_or_empty(prefix))
    {
        return false;
    }
    size_t prefix_len = su_length(prefix);
    size_t s_len = su_length(s);
    if (s_len < prefix_len)
    {
        return false; // s is shorter than prefix, can't start with it
    }
    for (size_t i = 0; i < prefix_len; i++)
    {
        if (s[i] != prefix[i])
        {
            return false; // characters don't match, can't start with it
        }
    }
    return true; // all characters match, s starts with prefix
}
