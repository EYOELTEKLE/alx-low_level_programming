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
	int t2;

	while (s[size] != '\0')
	{
		size++;
	}
	size = size - 1;
	while (size >= 0)
	{
		t1 = s[j];
		t2 = s[size];
		size--;
		j++;
	};
}
