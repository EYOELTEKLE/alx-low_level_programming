#include <stdio.h>
/**
 * main - prints 98 fibnonaci numbers
 * uses printf
 * Return: 0
 **/
int main(void) {
	unsigned long t1 = 1;
	unsigned long t2 = 2;
	int i = 0;
	unsigned long fib = t1 + t2;
    
	printf("%lu, ", t1);
	printf("%lu, ", t2);
	while (i <= 96)
	{
	if (i != 96)
	{
	printf("%lu, ", fib);
	}
	else
	{
	printf("%lu", fib);
	}
	t1 = t2;
	t2 = fib;
	fib = t1 + t2;
	i++;
	}
}
