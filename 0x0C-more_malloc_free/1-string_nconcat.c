#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n:  bytes from s2 to concatenate
 *
 * Return: Pointer to the newly  concatenated string
 *         NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int l1 = 0, l2 = 0, cat_l, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;

	if (n >= l2)
		n = l2;

	cat_l = l1 + n;
	cat = malloc((cat_l + 1) * sizeof(char));

	if (cat == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		cat[i] = s1[i];

	for (j = 0; j < n; j++)
		cat[i++] = s2[j];

	cat[i] = '\0';
	return (cat);
}

