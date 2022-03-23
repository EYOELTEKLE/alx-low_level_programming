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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
