#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - number printer
 * @separator: contains separator within an array
 * @n: size of integers
 * Return: null
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, tmp;
	va_list args;

	va_start(args, n);
	if (separator == NULL)
	{
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			tmp = va_arg(args, int);
			if (i == n - 1)
			{
				printf("%d", tmp);
			}
			else
			{
				printf("%d", tmp);
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(args);
}
