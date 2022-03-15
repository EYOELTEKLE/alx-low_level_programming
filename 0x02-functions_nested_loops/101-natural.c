#include "main.h"
#include <stdio.h>
/**
 * main - prints vaule of string
 * uses the putchar function
 * Return: 0
 */
int main(void)
{
	int n = 1024;
	int i;
	int sum = 0;
	
	for(i = 0; i < n ; i++)
	{
		if((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d", sum);
	return('\n');
}
