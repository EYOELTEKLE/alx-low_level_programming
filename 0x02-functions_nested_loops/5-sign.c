#include "main.h"
/**
 * print_sign - function that checks for alphabetic character.
 * @n: The input character to check
 * Return: int.
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n == 0)
	{
	_putchar(48);
	return (0);
	}
	else 
	{
	_putchar(45);
	return (-1);
	}
}
