#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')  /* Base case: Check if the current character ior. */
	{
		return;  /* If it is, return without printing (end of the string). */
	}

	_print_rev_recursion(s + 1);  /* Recursively call _print */
	_putchar(*s);  /* Print the current character of the string. */
}
