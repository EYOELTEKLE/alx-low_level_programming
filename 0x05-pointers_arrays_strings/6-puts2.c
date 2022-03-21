#include "main.h"
/**
 * puts2 - prints every two character
 * @str: string to be used
 * Return: null
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
