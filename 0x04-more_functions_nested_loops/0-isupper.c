#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: letter to be checked
 *
 * Return: 1 if it's uppercase , 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
