#include "main.h"
#include<stdlib.h>
/**
 * _strdup - returns string pointer
 * @str: Pointer to a string
 * Return: character
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i;
	unsigned int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			length = length + 1;
		}
		length++;
		copy = malloc(sizeof(char) * length);
		if (copy == NULL)
		{
			return (NULL);
		}
		for (i = 0; str[i] != '\0'; i++)
		{
			copy[i] = str[i];
		}
		return (copy);
	}
}
