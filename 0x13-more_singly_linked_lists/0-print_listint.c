#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the lists of the linkedlist
 * @h: pointer to a node
 * Return: digit
 */
size_t print_listint(const listint_t *h)
{

	int count = 0, i;

	for (i = 0; h != NULL; i++)
	{
		count++;
		if (h == NULL)
		{
			return (0);
		}
		else
		{
			printf("%d\n", h->n);
		}
		h = h->next;
	}
	return (count);
}
