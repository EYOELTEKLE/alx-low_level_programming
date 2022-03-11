#include<stdio.h>
/**
 * main - prints numbers 
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
	}
	printf("\n");
	return (0);
}
