#include "main.h"
/**
* _isdigit - checks if a number is between 0 - 9
* @c: input to be checked
* Return: int.
*/
int _isdigit(int c)
{
	if ( (c + 48) >= 48 && (c + 48) <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
