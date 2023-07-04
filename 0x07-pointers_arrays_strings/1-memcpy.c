#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: pointer where it'll be stored
 * @src: Pointer to source
 * @n: bytes to be copied
 *
 * Return: dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;

	while (n--)
		*d++ = *s++;

	return (dest);
}
