#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - main function
 * @argc: Input parameters length
 * @argv: Input vector containing parameters
 * Return: Integer
 */
int main(int argc, char *argv[])
{
	char op;
	int x, y, result;
	char *operand;
	int (*pointer)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = argv[2][0];
	if ((op != '*' && op != '+' && op != '-' && op != '/' && op != '%')
	|| argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	if ((op == '/' || op == '%') && y == 0)
	{
		printf("Error\n");
		exit(100);
	}
	operand = argv[2];
	pointer = get_op_func(operand);
	result = (*pointer)(x, y);
	printf("%d\n", result);
	return (0);
}
