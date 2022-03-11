#include<stdio.h>
/**
 * main - prints alphabetical letters in reverse
 * uses the putchar function
 * Return: 0
 */
int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i >= 0; i--)
	{
	putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
