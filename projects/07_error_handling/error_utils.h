#ifndef ERROR_UTILS_H
#define ERROR_UTILS_H

#include <stddef.h>

typedef enum
{
    EU_OK = 0,
    EU_NULL_POINTER,
    EU_EMPTY_INPUT,
    EU_OUT_OF_MEMORY
} eu_error_t;

/*
 Allocates a copy of src.
 on success:
   - returns EU_OK
   - *out_copy points to heap memory owned by the caller (caller must free)
*/
eu_error_t eu_string_duplicate(const char *src, char **out_copy);

/*
 Finds minimum value in array.
 On success:
  - returns EU_OK
  - *out_min is set to the minimum value in arr[0..len-1]
*/
eu_error_t eu_array_min(const int *arr, size_t len, int *out_min);

// Converts error code to readable string (never returns NULL).
const char *eu_error_to_string(eu_error_t error);

#endif // ERROR_UTILS_H
