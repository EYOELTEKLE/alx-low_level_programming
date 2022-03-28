#include "main.h"
/**
 * print_diagsums - sums the diagonal elements of an array
 * @a: input array
 * @size:size of the array
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i <= j)
			{
				sum = sum + a[i][j];
			}
		}
	}
}
