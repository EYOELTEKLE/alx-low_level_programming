#include "main.h"
/**
* print_line - prints _ line based on n
* @n: input taken
* Return: 0
*/
void print_line(int n)
{
	int i;
	
	for (i = 0; i <= n; i++)
	{
		if (n == 0)
		{
			break;
		}
		else
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
