#include<stdio.h>
/**
 * main - prints numbers separated by comma
 * uses the putchar function
 * Return: 0
 */
int main(void)
{
	int str[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
	int i;

	for (i = 0; i <= 9; i++)
	{
	putchar(str[i]);
	if (i != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
