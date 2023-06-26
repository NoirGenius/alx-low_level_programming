#include "main.h"
/**
 * swap_int - swaps values of 2 int
 * @a: pointer to first int
 * @b: pointer to 2nd int
 */
void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
