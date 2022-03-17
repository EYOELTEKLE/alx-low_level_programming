#include "main.h"
/**
*print_triangle - prints a left sided traingle
*@size: size of triangle
*Return: nothing
*/
void print_triangle(int size)
{
	int i;
	int j;
	int space;

	if (size < 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 1; i <= size; i++)
	{
	for (space = size - i; space > 0; space--)
	{
	_putchar(' ');
	}
	for (j = 1; j <= i; j++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
