#include<stdio.h>
#define name __FILE__
/**
 * main - prints file name of the program that it was compiled from
 * Return: nothing
 */
int main(void)
{
	printf("%s\n", name);
	return (0);
}
