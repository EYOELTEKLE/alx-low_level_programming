#include "main.h"
/**
 *  print_chessboard - prints chess elements
 *  @a: array pointer
 *  Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int j = 0;

	for (; j < 8; j++)
	{
		int i = 0;

		for (; i < 8; i++)
		{
			_putchar(a[j][i]);
		}
		_putchar('\n');
	}
}
