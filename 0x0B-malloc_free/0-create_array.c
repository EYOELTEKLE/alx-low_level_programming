#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates array
 * @size: Input bit size
 * @c: Specific character
 * Return: Character
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size != 0)
	{
		arr = malloc(sizeof(char) * size);
	}
	else
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		return (arr);
	}
}
