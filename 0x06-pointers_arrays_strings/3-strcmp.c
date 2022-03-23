#include "main.h"
/**
 * _strcmp - compares two strings s1 and s2
 * @s1: Input string
 * @s2: Input string
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int z, length1 = 0, count = 0;

	while (s1[length1] != '\0')
	{
		length1++;
	}
	for (z = 0; z < length1; z++)
	{
		if (s1[z] > s2[z])
		{
			count++;
		}
		else if (s1[z] < s2[z])
		{
			count--;
		}
	}
	if (count > 0)
	{
		return (15);
	}
	else if (count < 0)
	{
		return (-15);
	}
	else
	{
		return (0);
	}
}
