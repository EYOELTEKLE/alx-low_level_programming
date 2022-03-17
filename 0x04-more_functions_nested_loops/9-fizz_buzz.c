#include<stdio.h>
/**
 * main - prints numbers from 1 - 100 filtered wiz buzz and Fizzbuzz
 * Return: nothing.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{
		printf("Buzz");
		}
		else
		{
		if (i % 3 == 0 && i % 5 == 0)
		{
		printf("FizzBuzz");
		printf(" ");
		}
		else if (i % 5 == 0)
		{
		printf("Buzz");
		printf(" ");
		}
		else if (i % 3 == 0)
		{
		printf("Fizz");
		printf(" ");
		}
		else
		{
		printf("%d", i);
		printf(" ");
		}
		}
	}
	printf("\n");
	return (0);
}
