#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9.
 *
 * Return: nothing.
 */

void print_numbers(void)
{
	int n = 48;

	while (n <= 57)
	{
		_putchar(n);
		n += 1;
	}
	_putchar('\n');
}
