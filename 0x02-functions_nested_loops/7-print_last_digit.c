#include "main.h"
/**
 * print_last_digit - prints last digit
 *@r: value whose last dig we'll use
 *
 *Return: the last digit
 */
int print_last_digit(int r)
{
	int ld;

	if (r < 0)
	{
		r = -r;
	}

	ld = r % 10;

	_putchar('0' + ld);

	return (ld);
}
