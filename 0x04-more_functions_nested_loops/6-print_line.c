#include "main.h"

/**
 * print_line - str8 line in terminal
 * @n: n times _ is printed
 */
void print_line(int n)
{
	int c;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
			_putchar('_');
	}

	_putchar('\n');
}
