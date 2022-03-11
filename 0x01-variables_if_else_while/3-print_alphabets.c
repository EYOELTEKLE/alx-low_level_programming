#include<stdio.h>
/**
 * main - prints alphabetical letters in lowercase and lowercase
 * uses the putchar function
 * Return: 0
 */
int main(void)
{
	char str1[] = "abcdefghijklmnopqrstuvwxyz";
	char str2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i <= 25; i++)
	{
	putchar(str1[i]);
	}
	for (i = 0; i <= 25; i++)
        {
        putchar(str2[i]);
        }
	printf("\n");
	return (0);
}
