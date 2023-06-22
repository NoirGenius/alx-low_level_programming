#include "main.h"

/**
 * print_diagonal - draws / in terminal
 * @n: number of times to print /
 */
void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}
}
