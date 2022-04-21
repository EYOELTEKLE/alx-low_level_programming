#include "lists.h"
#include <stdio.h>
/**
 * print_list - counts the number of node
 * @h: pointer to a string
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0, i;

	for (i = 0; h != NULL; i++)
	{
		count++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (count);
}
