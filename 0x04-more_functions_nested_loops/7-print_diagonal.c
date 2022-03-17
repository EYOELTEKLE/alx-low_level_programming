#include "main.h"
/**
 * print_diagonal - prints Number in diagonal format.
 * @n: input number
 * Return: nothing.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
		for (j = 1; j <= n; j++)
		{
			if (j == i)
			{
			_putchar(92);
			}
			else
			{
			_putchar(' ');
			}
		}
		_putchar('\n');
		}
	}
}
