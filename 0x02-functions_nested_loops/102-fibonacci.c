#include "main.h"
#include<stdio.h>
/**
 * main -  prints fib sequence
 * uses standard lib
 * Return: 0
 */
int main(void)
{
int i, n;
int t1 = 0, t2 = 1;
int nextTerm = t1 + t2;
n = 50;
printf("%d", 1);
printf(",");
printf(" ");
for (i = 3; i <= 50; i++)
{
	if (i != 50)
	{
	printf("%d, ", nextTerm);
	}
	else
	{
	printf("%d", nextTerm);
	}
	t1 = t2;
	t2 = nextTerm;
	nextTerm =  t1 + t2;
}
return (0);
}
