#include <stdio.h>
/**
 * main - entry point
 * Return : 0 is returned
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z' ; ch++)
	{
		if (ch == 'q' || ch == 'a')
		{
			continue;
		}
			putchar(ch);
	}
	putchar('\n');

	return (0);
}
