#include "main.h"
/**
 * prints_sign - gives sign output for numbers
 * @n: the number we are checking
 *
 * Return:1 and prints'+' if more than 0,
 *0 and prints '0' if number is 0,
 *-1 and prints '-1' if number is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
