#include "main.h"
/**
 * _strspn - returns length of substring
 * @s: main string pointer
 * @accept: substring pointer
 * Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int j = 0, output = 0;

	for (; s[j] != '\0'; j++)
	{
		s[j] = accept[j];
		output++;
	}
	return (output);
}

/**
 * _strchr - function that fills memory with a constant byte.
 * @s: destenation of string
 * @c: character to replace
 *
 * Return: a pointer to the resulting string
 */

char *_strchr(char *s, char c)
{
	int j = 0;

	for (; s[j] != '\0' && s[j] != c; j++)
	{
		continue;
	}
	if (s[j] == c)
		return (s + j);
	else
		return (0);
}
