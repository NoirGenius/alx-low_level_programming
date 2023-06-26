#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: poiner to string
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}

	_putchar('\n');
}
