#include "main.h"
/**
 * _puts - prints string 
 * @str: pointer to a string
 * Return: void
 */
void _puts(char *str)
{
	int ch = 0;

	while (str[ch] != '\0')
	{
		_putchar(str[ch]);
		ch++;
	}
}
