#include "main.h"
/**
 * print_last_digit - function that computes the last value of an integer.
 * @x: The input number to check
 * Return: int.
 */
int print_last_digit(int x)
{
	_putchar(x % 10);
	_putchar('\n');
}