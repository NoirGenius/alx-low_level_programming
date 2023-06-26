#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reverses
 */
void rev_string(char *s)
{
	int len = 0;
	int n;
	char not;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	s--;

	for (n = 0; n < len / 2; n++)
	{
		not = *(s - n);
		*(s - n) = *(s - len + n + 1);
		*(s - len + n + 1) = not;
	}
}
