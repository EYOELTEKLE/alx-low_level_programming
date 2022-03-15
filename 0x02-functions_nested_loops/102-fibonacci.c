#include "main.h"
#include<stdio.h>
/**
 * main -  prints fib sequence
 * uses standard lib
 * Return: 0
 */
int main(void)
{
long i;
long t1 = 1, t2 = 1;
long nextTerm = t1 + t2;

printf("%d", 1);
printf(",");
printf(" ");
for (i = 3; i <= 52; i++)
{
	if (i != 50)
	{
	printf("%ld, ", nextTerm);
	}
	else
	{
	printf("%ld", nextTerm);
	}
	t1 = t2;
	t2 = nextTerm;
	nextTerm =  t1 + t2;
}
return (0);
}
