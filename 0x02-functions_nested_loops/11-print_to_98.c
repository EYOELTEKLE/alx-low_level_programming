#include "main.h"
/**
 * print_to_98 - prints alphabetical letters in lowercase and lowercase
 * uses the putchar function
 * Return: 0
 */
void print_to_98(int n)
{
	for (n; n <=98; n++)
	{
	if (n != 98)
	{
	printf("%d",n);
	printf(",");
	printf(" ");
	}
	else
	{
	printf("%d",n);
	}
	}
}
