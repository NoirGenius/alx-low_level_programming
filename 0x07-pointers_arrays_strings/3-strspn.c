#include "main.h"
#include <stddef.h>
/**
 * _strspn - length of prefix substring
 * @s: pntr of string to searched
 * @accept: pntr to string containing accepted bytes
 *
 * Return: number f bytes from @s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int m;

	while (*s != '\0')
	{
		m = 0;
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				c++;
				m = 1;
				break;
			}
			accept++;

		}
		if (m == 0)
			break;
		s++;
		accept = accept - c;
	}

	return (c);
}
