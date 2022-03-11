#include<stdio.h>
/**
 * main - prints 3 integers unique combination
 * uses the putchar function
 * Return: 0
 */
int main(void)
{
	int str[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
	int i;
	int j;
	int z;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	for (z = 0 ; z <= 9; z++)
	{
	if (str[i] > str[j] || str[i] > str[z] || str[j] > str[z] || str[i] == str[j] || str[i] == str[z] || str[z] == str[j])
	{
	continue;
	}
	putchar(str[i]);
	putchar(str[j]);
	putchar(str[z]);
	if (i == 7 && j == 8 && z ==9)
	{
	break;
	}
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
