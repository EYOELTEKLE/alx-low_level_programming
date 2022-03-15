#include<main.h>
/**
 * print_alphabet - prints all alphabets in lowercase
 * uses the putchar function
 * Return: nothing
 */
void print_alphabet(void)
{
	for(int i = 97; i <= 122; i++)
	{
	putchar(i);
	}
	putchar('\n');
}
