#include "main.h"
/**
 * _islower - checks for character.
 * @c: character to check.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
