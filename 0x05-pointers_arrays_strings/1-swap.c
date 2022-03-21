#include "main.h"
/**
 * swap_int - swaps to values of two integers
 * @a: input taken to be swapped
 * @b: input taken to be swappped
 * Return: returns nothing
 */
void swap_int(int *a, int *b)
{
	int t1;
	int t2;

	t1 = *a;
	t2 = *b;
	*a = t2;
	*b = t1;
}
