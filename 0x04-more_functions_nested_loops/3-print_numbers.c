#include "main.h"

/**
 * print_numbers - prints form 0 - 9
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		_putchar(n + '0');

	_putchar('\n');
}