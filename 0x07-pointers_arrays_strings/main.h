#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stddef.h>

/**
 * _memset: this would fill first specified bytes of memory pointed
 *           to with a constant byte
 * _memcpy: copies n bytes from memory area
 */

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);

#endif /* MAIN_H */
