#include "main.h"
#include <stdlib.h>

/**
 * array_range - array of integers
 * @min: Min value
 * @max: Max value
 *
 * Return: Pointer to  array
 *         NULL  min > max || if malloc fails
 */
int *array_range(int min, int max)
{
	int *ar;
	int size, j;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ar = malloc(size * sizeof(int));
	if (ar == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		ar[j] = min++;

	return (ar);
}
