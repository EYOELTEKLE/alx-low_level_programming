#include "main.h"
/**
 * set_string - makes a pointer point to a pointer
 * @s: input pointer
 * @to: input pointer
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
