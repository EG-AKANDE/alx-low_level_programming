#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stddef.h>

/**
 * _memset: this would fill first specified bytes of memory pointed
 *           to with a constant byte
 * _memcpy: copies n bytes from memory area
 *
 * _strspn: Returns the number of bytes in the initial segment
 */

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif /* MAIN_H */
