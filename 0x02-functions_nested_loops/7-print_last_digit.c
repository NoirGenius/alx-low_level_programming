#include "main.h"
/**
 * print_last_digit - prints last digit
 *@r: value whose last dig we'll use
 *
 *Return: the last digit
 */
int print_last_digit(int r)
{
	int last_digit;

	if (r < 0)
	{
		r = -r;
	}

	last_digit = r % 10;

	_putchar('0' + last_digit);

	return (last_digit);
}
