#include "main.h"
/**
 * rot13 - additive  cipher algorithm (rot13)
 * @s: Input string pointer
 * Return: character
 */
char *rot13(char *s)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int j, i, c;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] >= 97 && s[j] <= 122)
		{
			for (i = 0; i <= 25; i++)
			{
			if (s[j] == lower[i])
			{
				break;
			}
			}
			c = (i + 13) % 26;
			s[j] = lower[c];
		}
		if (s[j] >= 65 && s[j] <= 90)
		{
			for (i = 0; i <= 25; i++)
			{
			if (s[j] == upper[i])
			{
				break;
			}
			}
			c = (i + 13) % 26;
			s[j] = upper[c];
		}
	}
	return (s);
}
