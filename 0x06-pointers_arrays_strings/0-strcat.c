#include "main.h"
/**
 * _strcat - concatenates 2 lines
 * @dest: destination of the string
 * @src: source of the string
 *
 * return: pointer to  dest
 *
 */
char *_strcat(char *dest, char *src)
{
	int dest_length = 0;
	int n;

	/*find the dest's length*/
	while (dest[dest_length] != '\0')
		dest_length++;

	/*Concatenate the src to dest string*/
	for (n = 0; src[1] != '\0'; n++)
		dest[dest_length++] = src[1];

	dest[dest_length] = '\0';/*terminating byte*/

	return dest;
}
