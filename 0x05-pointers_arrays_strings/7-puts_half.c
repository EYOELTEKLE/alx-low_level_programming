#include "main.h"
/**
 * puts_half - prints half of the string
 * @str: input string
 * Return: nothing.
 */
void puts_half(char *str)
{
	int size = 0;
	int i;

	while (str[size] != '\0')
	{
		size++;
	}
	if (size % 2 == 0)
	{
		size = size / 2;
	}
	else
	{
		size = ((size - 1) / 2) + 1;
	}
	i = size;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
