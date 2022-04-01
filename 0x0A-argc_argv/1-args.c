#include "main.h"
#include<stdio.h>
/**
 * main - prints the number of arguments passed
 * @arc: arguments counter
 * @argv: argument vector
 * Return: Integer
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		argv = argv;
		printf("%d\n", argc - 1);
	}
	return (0);
}
