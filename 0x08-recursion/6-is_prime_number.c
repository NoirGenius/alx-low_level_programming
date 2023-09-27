#include "main.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: 1 if n is prime, otherwise 0.
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Helper function to check if a number is prim.
 * @n: The number to be checked.
 * @i: The current divisor to check.
 *
 * Return: 1 if n is prime, otherwise 0.
 */
int is_prime_helper(int n, int i)
{
	if (n <= 1)
		return (0);

	if (i == n)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime_helper(n, i + 1));
}
