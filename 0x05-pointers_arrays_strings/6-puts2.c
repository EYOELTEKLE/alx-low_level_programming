#include "main.h"
/**
 * puts2 - prints every two character
 * @str: string to be used
 * Return: null
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		_putchar(str[j]);
		i++;
		j = j + 2;
	}
}
