#include "main.h"
/**
 * print_square - prints square pattern
 * @size: size of square to be printed
 * Return: nothing
 */
void print_square(int size)
{
	int i;
	int j;

	if (size == 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
		_putchar(35);
		}
		_putchar('\n');
	}
	_putchar('\n');
	}
}
