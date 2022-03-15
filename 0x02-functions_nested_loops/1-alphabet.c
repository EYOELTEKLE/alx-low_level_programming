#include "main.h"
/**
 * print_alphabet - prints all alphabets in lowercase
 * uses the putchar function
 * Return: nothing
 */
void print_alphabet(void)
{
	int i;

	for(i = 97; i <= 122; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
}
