#include "main.h"
/**
 * main - prints 9 times table
 * uses the putchar function
 * Return: 0
 */
void times_table(void)
{
	int i;
	int j;
	int mul;

	for(i = 0; i <= 9; i++)
	{
		for(j = 0; j <=9; j++)
		{
		mul = i * j;
		if (mul < 10)
		{
		if (mul !=9 )
		{
		_putchar(' ');
		_putchar(' ');
		_putchar(mul + '0');
		_putchar(',');
		_putchar(' ');
		}
		else
		{
		_putchar(mul + '0');
		}
		}
		else
		{
		if (mul != 81)
		{
		_putchar((mul / 10) + '0');
		_putchar((mul % 10) + '0');
		_putchar(',');
		_putchar(' ');
		}
		else
		{
		_putchar((mul / 10) + '0');
		_putchar((mul % 10) + '0');
		}
		}
		}
		_putchar('\n');
	}
}
