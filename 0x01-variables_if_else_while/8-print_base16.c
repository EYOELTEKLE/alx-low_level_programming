#include<stdio.h>
/**
 * main - prints base16 numbers
 * uses the putchar function
 * Return: 0
 */
int main(void)
{
	int str[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
	char let[] = "abcdef";
	int i;

	for (i = 0; i <= 9; i++)
	{
	putchar(str[i]);
	}
	for (i = 0; i <= 5; i++)
	{
	putchar(let[i]);
	}
	putchar('\n');
	return (0);
}
