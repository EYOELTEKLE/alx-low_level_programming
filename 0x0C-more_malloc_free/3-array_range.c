#include "main.h"
#include<stdlib.h>
/**
 * array_range - returns an array of min with max
 * @min: min starting value
 * @max: max ending value
 * Return: integer
 */
int *array_range(int min, int max)
{
	int length, i;
	int *arr;

	length = max - min;
	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * (length + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; min++, i++)
	{
		arr[i] = min;
	}
	return (arr);
}
