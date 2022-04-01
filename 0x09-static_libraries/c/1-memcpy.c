#include "main.h"
/**
 * _memcpy - copies string from src to dest
 * @dest: Destination string pointer
 * @src: Source string pointer
 * @n: Bit length constraint
 * Return: character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && dest[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
