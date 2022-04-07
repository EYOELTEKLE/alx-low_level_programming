#include "main.h"
#include<stdlib.h>
/**
 * _calloc - allocates memmory for array elements
 * @nmemb: array indices
 * @size: each size of indices
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *strings;
	unsigned int j;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	strings = malloc(nmemb * size);
	if (strings == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < (nmemb * size); j++)
	{
		strings[j] = '\0';
	}
	return (strings);
}
