#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 *
 * @argc: parameter length of main function
 * @argv: array containing arguments of main function
 *
 * Return: int
 */

int main(int argc, char **argv)
{
	int i, bytes;
	char *address;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	address = (char *)main;
	for (i = 0; i < bytes - 1; i++)
	{
		printf("%02hhx ", address[i]);
	}
	printf("%02hhx\n", address[i]);
	return (0);
}
