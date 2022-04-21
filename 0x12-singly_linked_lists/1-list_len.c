#include "lists.h"
/**
 * list_len - returns length of a linkedList
 * @h: pointer to linked List
 * Return: length of list
 */
size_t list_len(const list_t *h)
{
	int count = 0, i;

	for (i = 0; h != NULL; i++)
	{
		count++;
		h = h->next;
	}
	return (count);
}
