#include "main.h"
/**
 * string_toupper - converts lowercase letters to uppercase
 * @str: pointer to a string
 * Return: char
 */
char *string_toupper(char *str)
{
	int j;
	int length = 0;

	for (j = 0; str[j] != '\0'; j++)
	{
		length++;
	}
	length = length - 1;
	for (j = 0; j <= length; j++)
	{
		if (str[j] >= 97 && str[j] <= 122)
		{
			str[j] = str[j] - 32;
		}
	}
	return (str);
}
