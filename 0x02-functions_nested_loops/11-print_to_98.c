#include<stdio.h>
#include "main.h"
/**
 * print_to_98 - prints numbers from target number upto 98
 * uses the putchar function
 * @n - uses integer as a paramenter
 * Return: 0
 */
void print_to_98(int n)
{
	int x;
	if (n <= 98)
	{
	for (x = n; x <= 98; x++)
	{
	if (x != 98)
	{
	printf("%d", x);
	printf(",");
	printf(" ");
	}
	else
	{
	printf("%d", x);
	}
	}
	}
	else
	{
	for (x = n; x >= 98; x--)
	{
	if (x != 98)
	{
	printf("%d", x);
	printf(",");
	printf(" ");
	}
	else
	{
	printf("%d", x);
	}
	}
	}
	printf("\n");
}
