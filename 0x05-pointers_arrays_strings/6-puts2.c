#include "main.h"
/**
 * puts2 - prints every two character
 * @str: string to be used
 * Return: null
 */
void puts2(char *str)
{
	int i = 0;
	int size = 0;
	int j = 0;

	while (str[size] != '\0')
	{
		size++;
	}
	while (i < size - 1)
	{
		_putchar(str[j]);
		i++;
		j = j + 2;
	}
	_putchar('\n');
}
