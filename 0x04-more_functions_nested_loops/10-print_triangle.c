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

	for (i = 1; i <= size; i++)
	{
	for (space = size - i; space > 0; space--)
	{
	putchar(' ');
	}
	for (j = 1; j <= i; j++)
	{
	putchar(35);
	}
	putchar('\n');
	}
}
