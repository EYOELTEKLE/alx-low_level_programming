#include "main.h"
/**
 * _print_rev_recursion - reverses a string using recursion
 * @s: pointer to a string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
