#include "main.h"
/**
 * _pow_recursion - calculates x the power of y
 * @x: Number to be raised
 * @y: Number to be the exponent
 * Return: Nothing
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
