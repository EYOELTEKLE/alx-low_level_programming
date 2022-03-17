#include "main.h"
/**
* _isupper - checks if a character is uppercase
* @c: input to be checked
* Return: int.
*/
int _isupper(int c)
{
	if ( c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
