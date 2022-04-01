#include "main.h"
#include<stdio.h>
/**
 * main - returns the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		if (argc == 1)
			printf("%s\n", argv[count]);
		else
			break;
	}
	return (0);
}
