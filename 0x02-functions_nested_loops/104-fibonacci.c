#include <stdio.h>
/**
 * main - prints 98 fibnonaci numbers
 * uses printf
 * Return: 0
 **/
int main(void) {
	float t1 = 1;
	float t2 = 2;
	int i = 0;
	float fib = t1 + t2;
    
	printf("%f, ", t1);
	printf("%f, ", t2);
	while (i <= 96)
	{
	if (i != 96)
	{
	printf("%f, ", fib);
	}
	else
	{
	printf("%f", fib);
	}
	t1 = t2;
	t2 = fib;
	fib = t1 + t2;
	i++;
	}
}
