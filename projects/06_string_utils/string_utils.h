#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <stdbool.h>
#include <stddef.h>

/*
Public API rules:
 - Headers declare what you provide, not how to implement it.
 - No static functions here.
 - Keep includes minimal.
*/

// Returns string length. Safe: returns 0 if the input is NULL.
size_t su_length(const char *s);
// Returns the number of occurrences of a character in a string. Safe: returns 0 if the input is NULL.
size_t su_count_char(const char *s, char target);

/*
 Allocates a new copy of src.
 On success: *out_copy points to heap memory owned by the caller (caller must free).
 Returns false on invalid input or allocation failure.
*/
bool su_duplicate(const char *src, char **out_copy);

/*
 Finds minimum in arr[0..len-1].
 On success writes to *out_min and returns true.
 Returns false for invalid input.
*/
bool su_array_min(const int *arr, size_t len, int *out_min);

// Returns true if s starts with prefix, else false.
// Safe: returns false if s == NULL or prefix == NULL.
bool su_starts_with(const char *s, const char *prefix);

#endif
