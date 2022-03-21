#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to a string
 * Return: nothing
 */
void rev_string(char *s)
{
	int size = 0;
	int j = 0;
	int t1;
	int l;

	while (s[size] != '\0')
	{
		size++;
	}
	l = size;
	size = size - 1;
	while (j < l / 2)
	{
		t1 = s[j];
		s[j] = s[size];
		s[size] = t1;
		size--;
		j++;
	};
}
