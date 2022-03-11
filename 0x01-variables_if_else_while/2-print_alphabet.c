#include<stdio.h>
/**
 * main - prints alphabetical letters in lowercase
 * uses the putchar function
 * Return: 0
 */
int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	for (int i = 0; i <= 25; i++)
	{
	putchar(str[i]);
	}
	return (0);
}
