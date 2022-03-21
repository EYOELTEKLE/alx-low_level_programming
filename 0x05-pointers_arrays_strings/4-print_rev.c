#include "main.h"

/**
 * print_rev - function with 1 argument
 * @s: 1st argument char type
 *
 * Description: function that prints a string in reverse
 * Return: na
 */
void print_rev(char *s)
{
	int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}
	size = size - 1;
	while (size >= 0)
	{
		_putchar(s[size]);
		size--;
	};
	_putchar('\n');
}
