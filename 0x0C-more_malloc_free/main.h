#ifndef MALLOC_CHECKED_H
#define MALLOC_CHECKED_H

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of memory to allocate
 *
 * Return: Pointer to the allocated memory
 *         If malloc fails, terminates the program
 */ 
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);

#endif /* MALLOC_CHECKED_H */
