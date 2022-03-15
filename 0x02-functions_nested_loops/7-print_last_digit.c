#include "main.h"
/**
 * print_last_digit - function that computes the last value of an integer.
 * @x: The input number to check
 * Return: int.
 */
int print_last_digit(int x)
{
	x = x % 10;

	if (x < 0)
	{
	putchar('-');
	x = -1 * x;
	}
	putchar(x + '0');
	return ('\n');
}
