#include "variadic_functions.h"
/**
 * sum_them_all - sums all parameters
 * @n: number of parameters
 * Return: Integer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, tmp, sum = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		tmp = va_arg(args, int);
		sum = sum + tmp;
	}
	va_end(args);
	return (sum);
}
