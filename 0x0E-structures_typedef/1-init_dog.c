#include "dog.h"
#include<stdlib.h>
/**
 * init_dog - creates a dog struct with values
 * @d: struct pointer
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
