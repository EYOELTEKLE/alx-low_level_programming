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
	argc = argc - 1;
	printf("%s\n", argv[0]);
	return (0);
}
