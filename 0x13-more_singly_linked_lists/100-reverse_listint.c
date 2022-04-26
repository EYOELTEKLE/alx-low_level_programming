#include "lists.h"
/**
 * reverse_listint - reverses the LL
 * @head: double pointer to a head node
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *q;
	listint_t *p = *head;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	if (p->next == NULL)
	{	*head = p;
		return (*head);
	}
	*head = (*head)->next;
	reverse_listint(head);
	q = p->next;
	q->next = p;
	p->next =  NULL;
	return (0);
}
