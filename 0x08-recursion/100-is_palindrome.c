#include "main.h"
/**
 * check - checks palindrome
 * @s: input string
 * @i: input iterator
 * @length: array length
 * Return: integer
 */
int check(int i, int length, char *s)
{
	if (i != length / 2)
	{
		if (s[i] == s[length - i - 1])
		{
			i++;
		}
		else if (i == length - 1)
		{
			return (1);
		}
		else if (i == length && i != length - 1)
		{
			return (0);
		}
	}
	i++;
	return (check(i, length, s));
}
/**
 * is_palindrome - main recursor
 * @s: input pointer to a string
 * Return: integer
 */
int is_palindrome(char *s)
{
	int i = 0;
	int length;

	for (length = 0; s[length] != '\0'; s++)
	{
		length++;
	}
	if (s[i] == '\0')
	{
		return (1);
	}
	return (check(i, length, s));
}
