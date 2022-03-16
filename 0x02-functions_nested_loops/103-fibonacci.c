#include <stdio.h>
/**
 * main - sums even fib sequence
 * uses printf
 * Return: 0
 **/
int main(void)
{
	unsigned long t1 = 1;
	unsigned long t2 = 2;
	unsigned long fib = t1 + t2;
	unsigned long sum = 0;
	
	while (fib <= 4000000)
	{
	if (fib % 2 == 0)
	{
	sum = sum + fib;
	}
	t1 = t2;
	t2 = fib;
	fib = t1 + t2;
	}
	printf("%lu", sum);
	printf("\n");
	return (0);
}
