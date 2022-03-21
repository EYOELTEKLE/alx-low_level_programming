#include<stdio.h>
#include "main.h"
/**
 * print_array - prints array elements
 * @a: pointer array
 * @n: length of array
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != n - 1)
		{
		printf("%d, ", a[i]);
		}
		else
		{
		printf("%d", a[i]);
		}
	}
}
