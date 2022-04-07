#include <stdlib.h>

/**
 * string_nconcat - check the code
 * @s1: pointer to a string
 * @s2: pointer to a string
 * @n: byte length
 * Return: character.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *cp;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		i++;
	}
		for (j = 0; s1[j] != '\0'; i++)
	{
		j++;
	}
	if (n >= i)
	{
		n = i;
	}
	cp =  malloc(sizeof(cp) * (n + j + 1));
	if (cp == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		cp[i] = s1[i];
	}
	for (j = 0; j != n; i++, j++)
	{
		cp[i] = s2[j];
	}
	cp[i] = '\0';
	return (cp);
}
