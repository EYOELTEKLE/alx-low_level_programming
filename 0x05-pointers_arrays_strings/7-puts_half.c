#include "main.h"
/**
 * puts_half - prints half of the string
 * @str: input string
 * Return: nothing.
 */
void puts_half(char *str)
{
	int size;
	int i = 0;

	while (str[size] != '\0')
	{
		size++;
	}
	if (size % 2 == 0)
	{
		size = ((size / 2) - 1);
	}
	else
	{
		size = ((size - 1) / 2) - 1;
	}
	while (i <= size)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
