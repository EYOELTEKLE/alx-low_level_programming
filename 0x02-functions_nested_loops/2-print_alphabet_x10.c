include<main.h>
/**
 * print_alphabet_x10 - function that prints the alphabet, lowercase
 * You can only use _putchar twice in your code
 * Return: nothing.
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i <  10; i++)
	{
	for (j = 97; j < 122; j++)
	{
	_putchar(j);
	}
	_putchar('\n');
	}
}
