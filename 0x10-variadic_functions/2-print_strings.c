#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - prints string
 * @separator: separator string
 * @n: input parameter size
 * Return: null
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *tmp;
	va_list args;

	if (separator == NULL)
	{
	}
	else
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			tmp = va_arg(args, char *);
			if (tmp == NULL)
			{
				printf("(nil)");
			}
			else
			{
				if (i == n - 1)
				{
					printf("%s", tmp);
				}
				else
				{
					printf("%s%s", tmp, separator);
				}
			}
		}
	}
	va_end(args);
	printf("\n");
}
