#include "lists.h"
/**
 * add_nodeint - adds node at head of the LL
 * @n: value of the node
 * @head: pointer to head node
 * Return: pointer type
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	if (head == NULL)
	{
		temp->n = n;
		*head = temp;
		temp->next = NULL;
	}
	else
	{
		temp->n = n;
		temp->next = *head;
		*head = temp;
	}
	return (temp);
}
