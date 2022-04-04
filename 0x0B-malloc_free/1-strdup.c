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

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		copy = malloc(sizeof(char) * 3);
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
