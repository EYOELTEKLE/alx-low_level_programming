#include "main.h"
#include<stdio.h>
/**
 * main - prints all arguments
 * @argc: argument length
 * @argv: vector of arguments
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
