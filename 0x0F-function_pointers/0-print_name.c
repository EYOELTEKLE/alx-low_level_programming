#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: Input name
 * @f: Pointer to a function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
	}
	else
	{
		f(name);
	}
}
