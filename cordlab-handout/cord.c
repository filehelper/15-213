/*
 * @file cord.c
 * @brief Implementation of cords library
 *
 * 15-513 Introduction to Computer Systems
 *
 * TODO: fill in your name and Andrew ID below
 * @author XXX <XXX@andrew.cmu.edu>
 */

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "cord-interface.h"
#include "xalloc.h"

/***********************************/
/* Implementation (edit this part) */
/***********************************/

/**
 * @brief Checks if a cord is valid
 * @param[in] R
 * @return
 */
bool is_cord(const cord_t *R) { return false; }

/**
 * @brief Returns the length of a cord
 * @param[in] R
 * @return
 */
size_t cord_length(const cord_t *R) { return 0; }

/**
 * @brief Allocates a new cord from a string
 * @param[in] s
 * @return
 */
const cord_t *cord_new(const char *s) { return NULL; }

/**
 * @brief Concatenates two cords into a new cord
 * @param[in] R
 * @param[in] S
 * @return
 */
const cord_t *cord_join(const cord_t *R, const cord_t *S) { return NULL; }

/**
 * @brief Converts a cord to a string
 * @param[in] R
 * @return
 */
char *cord_tostring(const cord_t *R) {
  char *result = malloc(cord_length(R) + 1);
  return result;
}

/**
 * @brief Returns the character at a position in a cord
 *
 * @param[in] R  A cord
 * @param[in] i  A position in the cord
 * @return The character at position i
 *
 * @requires i is a valid position in the cord R
 */
char cord_charat(const cord_t *R, size_t i) {
  assert(i <= cord_length(R));
  return '\0';
}

/**
 * @brief Gets a substring of an existing cord
 *
 * @param[in] R   A cord
 * @param[in] lo  The low index of the substring, inclusive
 * @param[in] hi  The high index of the substring, exclusive
 * @return A cord representing the substring R[lo..hi-1]
 *
 * @requires lo and hi are valid indexes in R, with lo <= hi
 */
const cord_t *cord_sub(const cord_t *R, size_t lo, size_t hi) {
  assert(lo <= hi && hi <= cord_length(R));
  return NULL;
}
