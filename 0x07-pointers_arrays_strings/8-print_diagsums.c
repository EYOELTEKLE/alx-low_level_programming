#include "main.h"
#include <stdio.hi>
/**
 * print_diagsums - sums the diagonal elements of an array
 * @a: input array
 * @size:size of the array
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0si; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i <= j)
			{
				sum1 = sum1 + a[i][j];
			}
			if (i == (size - j - 1))
			{
				sum2 = sum2 + a[i][j];
			}
		}
	}
	printf("%d, %d", sum1, sum2);
	return (0);
}
