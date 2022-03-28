#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to a string
 * @c: target character to be found
 * Return: character
 */
char *_strchr(char *s, char c)
{
	unsigned int j = 0;

	for (; s[j] != '\0' && s[j] != c; j++)
	{
		continue;
	}
	if (s[j] == c)
		return (s + j);
	else
		return (NULL);
}
