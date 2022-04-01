#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: total arguments
 * @argv: vector containing arguments
 * Return: Integer
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
