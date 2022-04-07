#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - check the code
 *@b: input size of memory
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *me;

	me = malloc(sizeof(me) * b);
	if (me == NULL)
	{
		return (98);
	}
	else
	{
		return (me);
	}
}
