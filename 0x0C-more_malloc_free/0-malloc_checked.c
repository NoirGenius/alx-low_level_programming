#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - pointer thant allocates memory
 * @b: sixe to allocate
 *
 * Return: pointer to allocate,or terminates program
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
