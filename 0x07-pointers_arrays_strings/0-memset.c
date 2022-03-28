#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: destenation of string
 * @b: character to replace
 * @n: size of bits to be used
 * Return: a pointer to the resulting string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
