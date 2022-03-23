#include "main.h"
/**
 * _strncpy - copies a string
 * @src: Souce string
 * @dest: Destination string
 * @n: copy bit length
 * Return: character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int length = 0;
	int j = 0;
	int x;

	while (dest[length] != '\0')
	{
		length++;
	}
	while (j < n)
	{
		src[j] = src[j];
		j++;
	}
	src[j] = '\0';
	x = j;
	j = 0;
	while (j < length - n)
	{
		src[x] = dest[j];
		j++;
		x++;
	}
	src[x] = '\0';
	dest = src;
	return (dest);
}
