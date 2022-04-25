#include "lists.h"
/**
 * insert_nodeint_at_index - inserts at the nth position of the LL
 * @head: pointer to a head pointer
 * @idx: index position that the new node should be placed
 * @n: data value of z pointer
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	unsigned int i;

	temp->n = n;
	temp->next = NULL;
	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
	}
	else
	{
		listint_t *temp2 = *head;
		listint_t *temp3 = *head;

		for (i = 0; temp3 != NULL; i++)
		{
			temp3 = temp3->next;
		}
		if (i < idx)
		{
			return (NULL);
		}
		else
		{
			for (i = 1; i <= idx - 1; i++)
			{
				temp2 = temp2->next;
			}
			temp->next = temp2->next;
			temp2->next = temp;
		}
	}
	return (0);
}
