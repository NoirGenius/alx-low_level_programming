#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Success (0)
 */
int main(void)
{
	char alphabet = z;

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}

	putchar('\n');

	return (0);
}
