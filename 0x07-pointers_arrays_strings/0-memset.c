#include "main.h"
#include <stdio.h>
/**
 * _memset - ills the n bytes of the memory  pointed by s with byte b
 * @s: pointer to area to fill
 * @b: constant byte to fill the memory
 * @n: bytes to fill
 *
 * return: pointer @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;

	return (s);
}
