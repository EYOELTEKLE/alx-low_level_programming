#include "main.h"
/**
 * print_rev - prints a string in reverse order
 * @s: pointer to a string
 * Return: void
 */
void print_rev(char *s)
{
	int size = 0;
	int j = 0;

	while (s[size] != '\0')
	{
		size++;
	}
	char arr[size];

	while (s[j] != '\0')
	{
		arr[j] = s[j];
		j++;
	}
	j = size - 1;

	while (j >= 0)
	{
		_putchar(arr[j]);
		j--;
	}
	_putchar('\n');
}
