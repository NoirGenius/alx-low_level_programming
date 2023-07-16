#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates array of chars || initializes a specific char.
 * @size:  size of  array
 * @c:  character that initializes the array
 *
 * Return: pointer to the array || NULL on failure
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *ar = malloc(size * sizeof(char));

	if (ar == NULL)
		return (NULL);

	for (unsigned int j = 0; j < size; j++)
		ar[j] = c;

	return (ar);
}
