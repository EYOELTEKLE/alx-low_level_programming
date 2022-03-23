#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: Pointer to an Array
 * @n: Array Length
 * Return: Integer
 */
void reverse_array(int *a, int n)
{
	int t1;
	int j = 0;
	int len = n - 1;

	while (j < n / 2)
	{
		t1 = a[j];
		a[j] = a[len];
		a[len] = t1;
		len--;
		j++;
	}
}
