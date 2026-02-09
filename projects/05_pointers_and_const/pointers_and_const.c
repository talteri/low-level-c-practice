#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>

static bool increment_if_not_null(int *value)
{
    if (value == NULL)
    {
        return false;
    }
    *value += 1;
    return true;
}

static size_t count_char(const char *s, char target)
{
    if (s == NULL)
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

static bool set_first_char(char *s, char c)
{
    if (s == NULL || s[0] == '\0')
    {
        return false;
    }
    s[0] = c;
    return true;
}

// Returns true on success.
// On success, writes the minimum value in the array to *out_min.
static bool array_min(const int *arr, size_t len, int *out_min)
{
    if (arr == NULL || len == 0 || out_min == NULL)
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

// Allocates a new copy of `src`.
// On success, stores the pointer in *out_copy and returns true.
static bool string_duplicate(const char *src, char **out_copy)
{
    if (src == NULL || out_copy == NULL)
    {
        return false;
    }

    *out_copy = NULL; // makes failure state explicit

    size_t len = 0;
    while (src[len] != '\0')
    {
        len++;
    }

    char *copy = malloc(len + 1);
    if (copy == NULL)
    {
        return false;
    }

    for (size_t i = 0; i <= len; i++)
    {
        copy[i] = src[i];
    }

    *out_copy = copy;
    return true;
}

int main(void)
{
    int x = 10;
    if (increment_if_not_null(&x))
    {
        printf("x after increment: %d\n", x);
    }

    const char *name = "Tal";
    size_t a_count = count_char(name, 'a');
    printf("Number of 'a' in \"%s\": %zu\n", name, a_count);

    char mutable_word[] = "hello";
    if (set_first_char(mutable_word, 'H'))
    {
        printf("mutable_word after setting first character: %s\n", mutable_word);
    }

    int numbers[] = {7, 32, 2, 3, 42, -5, 9};
    int min_value = 0;

    if (array_min(numbers, 7, &min_value))
    {
        printf("Minimum value in the array: %d\n", min_value);
    }

    char *copy_of_name = NULL;
    if (string_duplicate(name, &copy_of_name))
    {
        printf("Duplicate of name: \"%s\"\n", copy_of_name);
        free(copy_of_name);
        copy_of_name = NULL;
    }

    return 0;
}