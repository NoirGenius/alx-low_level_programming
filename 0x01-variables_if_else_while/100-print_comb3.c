#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Success(0)
 */
int main(void)
{
	int  n1;
	int  n2;

	for (n1 = 0; n1 < 9; n1++)
	{
		for (n2 = n1 + 1; n2 < 10; n2++)
		{
			putchar(n1 + '0');
			putchar(n2 + '0');

			if (!(n1 == 8 && n2 == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
