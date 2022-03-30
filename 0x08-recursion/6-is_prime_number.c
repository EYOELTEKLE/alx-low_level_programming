#include "main.h"
/**
 * checker - returns value
 * @n: input number
 * @i: recursive iterator
 * Return: integer
 */
int checker(int n, int i)
{
	if (n <= 2)
		return ((n == 2) ? 1 : 0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (checker(n, i + 1));
}
/**
 * is_prime_number - main recursive caller
 * @n: input number
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}
	return (checker(n, 2));
}
