#include "dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * print_dog - prints value of struct
 * @d: pointer to a struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	}
	else
	{
		if (d->name == NULL)
		{
			d->name = "(nil)";
		}
		if (d->owner == NULL)
		{
			d->owner = "(nil)";
		}
		printf("Name: %s\n", d->name);
		if (d->age < 0)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("Age: %f\n", d->age);
		}
		printf("Owner: %s\n", d->owner);
	}
}
