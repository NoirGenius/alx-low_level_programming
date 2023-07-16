#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for array and sets memory to zero
 * @nmemb:  elements in the array
 * @size: Size of  element
 *
 * Return: Pointer to  allocated slot
 *         NULL if nmemb || size is 0 || if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int t_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	t_size = nmemb * size;

	p = malloc(t_size);
	if (p == NULL)
		return (NULL);

	memset(p, 0, t_size);

	return (p);
}
