#include "main.h"
#include <stdio.h>
/**
 * _strstr - finds substring
 * @haystack - string to search in
 * @needle - pntr to string to find
 *
 * Retun: pntr to begining to substring NULL is sub isn't found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *a = haystack;
		char *z = needle;

		while (*needle != '\0' && *haystack == *z)
		{
			haystack++;
			z;
		}

		if (*z == '\0')
			return (a);

		haystack = a + 1;
	}

	return (NULL);
}
