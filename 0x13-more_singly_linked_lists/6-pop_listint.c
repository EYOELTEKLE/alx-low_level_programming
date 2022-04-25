#include "lists.h"
/**
 * pop_listint - return the top of the LL, pop operation
 * @head: double pointer to the head  of the nodes
 * Return: Integer
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int tmp;

	if (temp == NULL)
	{
		return (0);
	}
	else
	{
		tmp = temp->n;
		*head = (*head)->next;
		free(temp);
		return (tmp);
	}
	return (0);
}
