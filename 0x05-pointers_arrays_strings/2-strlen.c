#include "main.h"
/**
 * _strlen - returns the size of a string
 * @s: input string
 * Return: integer.
 */
int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}
