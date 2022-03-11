#include<stdio.h>
/**
 * main - prints alphabetical letters which are numbers
 * uses the putchar function
 * Return: 0
 */
int main(void)
{
	char str[] = "0123456789";
	int i;

	for (i = 0; i <= 9; i++)
	{
	putchar(str[i]);
	}
	printf("\n");
	return (0);
}
