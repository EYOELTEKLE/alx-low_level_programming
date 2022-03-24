#include "main.h"
/**
 * print_number - prints integer only using putchar
 * @n: Input Integer
 * Return: Integer
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
