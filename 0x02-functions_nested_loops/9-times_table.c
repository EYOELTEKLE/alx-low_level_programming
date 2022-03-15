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
		putchar(mul + '0');
		putchar(',');
		putchar(' ');
		}
		else
		{
		putchar(mul + '0');
		}
		}
		else
		{
		if (mul != 81)
		{
		putchar((mul / 10) + '0');
		putchar((mul % 10) + '0');
		putchar(',');
		puthcar(' ');
		}
		else
		{
		putchar((mul / 10) + '0');
		putchar((mul % 10) + '0');
		}
		}
		}
		putchar('\n');
	}
}
