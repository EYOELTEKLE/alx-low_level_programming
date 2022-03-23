#include "main.h"
/**
 * _strncat - concatenates two string with limitation of n bytes
 * @dest: Destination string
 * @src: Source string with n limitation
 * @n: bit constraint
 * Return: character
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int j = 0;
	char *pointer;

	while (dest[length] != '\0')
	{
		length++;
	}
	while (j < n)
	{
		dest[length] = src[j];
		j++;
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
