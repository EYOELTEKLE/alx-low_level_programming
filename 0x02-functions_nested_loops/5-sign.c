#include<main.h>
/**
 * 5-sign - function that checks for alphabetic character.
 * @c: The input character to check
 * Return: int.
 */
int print_sign(int n)
{
	if(n > 0)
	{
	putchar(43);
	return (1);
	}
	else if(n == 0)
	{
	putchar(48);
	return (0);
	}
	else 
	{
	putchar(45);
	return (-1);
	}
}
