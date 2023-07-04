#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - locates first occurrence in the string s of any of string accept
 * @s: pntr to string to search
 * @accept: pntr to string containing byte
 *
 * Return: pnt to byte @s that matches
 *or NULL if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *y = accept;

		while (*y != '\0')
		{
			if (*s == *y)
				return (s);
			y++;
		}
		s++;
	}

	return (NULL);
}
