/* 
 * readline.h - a utility function to safely read one line of input
 * Safely read a line of input into `buf` (with room for `len` chars).
 *
 * David Kotz, April 2016, 2017
 */

#ifndef __READLINE_H__
#define __READLINE_H__

#include <stdbool.h>

/* readline - Safely read a line of input into `buf`.
 *
 * Caller provides buffer `buf` with room for `len` characters.
 * We fill `buf` by reading characters from stdin,
 * guaranteeing we won't over-run the end of the buffer,
 * guaranteeing a null-terminated string in the buffer, with NO newline;
 * returning true if success and false if EOF or any error.
 * If the user enters more than len-1 characters, (not counting the newline), 
 *  that is considered an error.
 * If end-of-file is reached before newline, that is considered an error.
 * If an error occurs, buf may have been written but should be untrusted.
 */
extern bool readline(char *buf, const int len);

#endif //  __READLINE_H__
