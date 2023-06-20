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
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');

	return (0);
}
