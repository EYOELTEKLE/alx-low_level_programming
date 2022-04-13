#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: pointer to an array
 * @size: size of array
 * @cmp: pointer to a function
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, flag = 0;

	if (size == 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
		{
			flag++;
			break;
		}
	}
	if (flag > 0)
	{
		return (i);
	}
	else
	{
		return (-1);
	}
}
