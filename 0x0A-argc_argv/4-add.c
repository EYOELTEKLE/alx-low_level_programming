#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - adds up only positive number
 * @argc: total arguments
 * @argv: vector containing arguments
 * Return: Integer
 */
int main(int argc, char  *argv[])
{
	int sum = 0, i, flag = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) > 0)
		{
			sum = sum + atoi(argv[i]);
		}
		else if (argv[i] < "0" || argv[i] > "9")
		{
			flag++;
			break;
		}
	}
	if (flag == 0)
	{
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
