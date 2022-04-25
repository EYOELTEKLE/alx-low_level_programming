#include "lists.h"
/**
 * listint_len - prints length of the LinkedList
 * @h: pointer to a node
 * Return: number
 */
size_t listint_len(const listint_t *h)
{
	int i, count = 0;

	if (h == NULL)
	{
		return (0);
	}
	for (i = 0; h != NULL; i++)
	{
		count++;
		h = h->next;
	}
	return (count);
}
