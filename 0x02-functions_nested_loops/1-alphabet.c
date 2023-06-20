#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * return: success(0)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}

	_putchar('\n');

	return (0);
}
