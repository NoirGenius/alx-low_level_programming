#include "main.h"

/**
 * _isalpha -finds alphabetic character.
 * @c:  character to be checked.
 *
 * Return: 1 if c is a letter, 0 otherwise.
 */
int _isalpha(int)
{
	if ((c >= 'a' && c <= 'z') || (c <= 'A' && c >= 'Z'))
		return (1);
	else
		return (0);
}
