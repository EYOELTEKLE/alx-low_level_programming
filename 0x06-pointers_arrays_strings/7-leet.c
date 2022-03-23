#include "main.h"
/**
 * leet - elite function
 * @s: pointer to string
 * Return: character
 */
char *leet(char *s)
{
	int j, length = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		length++;
	}
	length = length - 1;
	for (j = 0; length >= j; j++)
	{
		if (s[j] == 97 || s[j] == 65)
		{
			s[j] = 52;
		}
		if (s[j] == 101 || s[j] == 69)
		{
			s[j] = 51;
		}
		if (s[j] == 79 || s[j] == 111)
		{
			s[j] = 48;
		}
		if (s[j] == 84 || s[j] == 116)
		{
			s[j] = 55;
		}
		if (s[j] == 108 || s[j] == 76)
		{
			s[j] = 49;
		}
	}
	return (s);
}
