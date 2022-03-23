#include "main.h"
/**
 * _strcat - concatenates strings
 * @dest: destination string
 * @src: source string
 * Return: character
 */
char *_strcat(char *dest, char *src)
{
	int length = 0;
	int j = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	while (src[j] != '\0')
	{
		dest[length] = src[j];
		length++;
		j++;
	}
	dest[length] = '\0';
	return (dest);
}
