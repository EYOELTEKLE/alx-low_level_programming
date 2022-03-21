#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to a string
 * Return: nothing
 */
void rev_string(char *s)
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
