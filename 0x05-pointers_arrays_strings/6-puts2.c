#include "main.h"
/**
 * puts2 - prints xters of the string
 * @str: pointer for string
 */
void puts2(char *str)
{
	int pos = 0;

	while (*(str + pos) != '\0')
	{
		_putchar(*(str + pos));
		pos += 2;
	}

	_putchar('\n');
}
