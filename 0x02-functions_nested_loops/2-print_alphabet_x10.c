#include "main.h"

/**
 *print_alphabet_x10 - prints lowercase alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int n;

	for (n = 1; n < 10; n++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
