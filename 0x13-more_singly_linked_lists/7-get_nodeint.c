#include "lists.h"
/**
 * get_nodeint_at_index - gets the node index of the LL
 * @head: pointer to pointer pointer
 * @index: position to be found
 * Return: pointer type
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int i;

	if (tmp == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; tmp != NULL; i++)
		{
			if (i == index)
			{
				return (tmp);
			}
			tmp = tmp->next;
		}
		return (NULL);
	}
	return (0);
}
