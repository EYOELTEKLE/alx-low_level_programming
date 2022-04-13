#include "function_pointers.h"
/**
 * array_iterator - executes print to display an array
 * @array: pointer to an array
 * @size: size of array
 * @action: Pointer to a function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int long i;

	if (action == NULL || array == NULL)
	{
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
