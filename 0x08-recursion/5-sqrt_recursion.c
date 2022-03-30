#include "main.h"
/**
 * sqr - used in recursion
 * @n: input number
 * @i: recursive number
 * Return: Integer
 */
int sqr(int n, int i)
{
	if (n == i * i)
	{
		return (i);
	}
	else if (n == i)
	{
		return (-1);
	}
	i++;
	return (sqr(n, i));
}
/**
 * _sqrt_recursion - recursion caller
 * @n: input number
 * Return: Integer
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n <= 0)
	{
		return (-1);
	}
	return (sqr(n, i));
}
