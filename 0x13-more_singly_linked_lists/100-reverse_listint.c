#include "lists.h"
/**
 * reverse_listint - reverses the LL
 * @head: double pointer to a head node
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;

	while ((*next)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	(*head)->next = prev;

	return (*head);
}
