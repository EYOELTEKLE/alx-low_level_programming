#include<stdio.h>
/**
 * main - prints sum of fib sequence which are divisble by two
 * uses printf 
 * Return - none
 */
int main(void)
{
long t1 = 1;
long t2 = 1;
long fib = t1 + t2;
long sum;
long i;

	for (i = 0; i <= 3999998; i++)
	{
		if (fib % 2 == 0)
		{
			sum = sum + fib;
		}
		else
		{
		continue;
		}
		t1 = t2;
		t2 = fib;
		fib = t1 + t2;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
