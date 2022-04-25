#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a given position
 * @head: pointer to a head node
 * @index: index position
 * Return: integer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;

	listint_t *temp = *head;
	listint_t *temp2 = *head;
	listint_t *temp3 = *head;

	if (temp == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; temp2 != NULL; i++)
	{
		temp2 = temp2->next;
		free(temp2);
	}
	if (i < index)
	{
		return (-1);
	}
	for (i = 1; i <= index - 1; i++)
	{
		if (temp3->next == NULL)
			return (-1);
		temp3 = temp3->next;
	}
	temp = temp3->next;
	temp3->next = temp->next;
	free(temp3);
	return (1);
}
