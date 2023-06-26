#include "main.h"
/**
 * puts_half -  prints half of a string
 * @str: string pointer
 */
void puts_half(char *str)
{
	int len = 0;
	int n;

	/*find string length*/
	while (str[len] != '\0')
		len++;

	/*print half 2*/
	for (n = (len + 1) / 2; n < len; n++)
		_putchar(str[1]);

	_putchar('\n');
}
