#include "main.h"
/**
 * swap_int - swaps to values of two integers
 * @a: input taken to be swapped
 * @b: input taken to be swappped
 * Return: returns nothing
 */
void swap_int(int *a, int *b)
{
	&a = *a;
	&b = *b;
	*b = *a;
	*a = &b;
}
