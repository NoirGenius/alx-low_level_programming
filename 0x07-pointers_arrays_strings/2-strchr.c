#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a char on a string
 * @s: pointer to string
 * @c: xter on a string
 *
 * Return: pointer to xter occurence NULL if xter isn't found
 * 	or NULL if character is found 
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return (NULL);
}
