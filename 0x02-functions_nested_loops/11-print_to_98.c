#include<stdio.h>
#include "main.h"
/**
 * print_to_98 - prints alphabetical letters in lowercase and lowercase
 * uses the putchar function
 * Return: 0
 */
void print_to_98(int n)
{
	int x;

	for (x = n; x <=98; x++)
	{
	if (x != 98)
	{
	printf("%d",x);
	printf(",");
	printf(" ");
	}
	else
	{
	printf("%d",x);
	}
	}
	printf("\n");
}
