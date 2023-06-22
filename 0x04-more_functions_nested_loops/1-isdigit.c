#include "main.h"

/**
 * _isdigit - checks for 0-9
 *@c: xter to be checked
 *
 * Return: (1) for digit ,(0) fail
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
