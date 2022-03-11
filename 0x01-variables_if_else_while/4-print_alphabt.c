#include<stdio.h>
/**
 * main - prints alphabetical letters in lowercase without q and e
 * uses the putchar function
 * Return: 0
 */
int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i <= 25; i++)
	{
	if (str[i] == 'q' || str[i] == 'e')
	{
	continue;
	}
	putchar(str[i]);
	}
	printf("\n");
	return (0);
}
