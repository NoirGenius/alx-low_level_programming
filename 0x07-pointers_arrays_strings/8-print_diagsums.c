#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - diagonals in squares
 * @a: input of square matrix
 * @aize: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int j, sum1 = 0, sum2 = 0;

	for (j = 0; j < size; j++)
	{
		sum1 += *(a + j * size + j);
		sum2 += *(a + j * (size - j - 1));
	}

	printf("%d, %d\n", sum1, sum2);
}
