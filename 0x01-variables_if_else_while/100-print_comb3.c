#include<stdio.h>
/**
 * main - prints combinator numbers separated by comma
 * uses the putchar function
 * Return: 0
 */
int main(void)
{
	int str[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	if (str[i] == str[j] || str[i] > str[j])
	{
	continue;
	}
	if (i != 9)
        {
        putchar(str[i]);
        putchar(str[j]);
	putchar(',');
	putchar(' ');
        }
	}	
	}
	putchar('\n');
	return (0);
}
