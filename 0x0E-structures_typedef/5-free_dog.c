#include "dog.h"
#include<stdlib.h>
/**
 * free_dog - frees memory of dog type
 * @d: pointer to type def
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
	}
	else
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
