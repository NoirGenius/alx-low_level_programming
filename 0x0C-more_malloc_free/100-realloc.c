#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - Reallocates  memory block through malloc and free
 * @ptr: Pointer to previos memory block
 * @old_size: Old size of memory block
 * @new_size: New size of memory block
 *
 * Return: Pointer to allocated memory block
 *         NULL if new_size is 0 && ptr is not NULL || if malloc fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *n_ptr;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	n_ptr = malloc(new_size);

	if (n_ptr == NULL)
		return (NULL);

	memcpy(n_ptr, ptr, old_size);
	free(ptr);

	return (n_ptr);
}
