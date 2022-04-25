#include "lists.h"
/**
 * add_nodeint_end - adds node at the end of the LL
 * @n: value to be added at the end of the Node
 * @head: pointer to the head node
 * Return: pointer type
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	int i;
	listint_t *temp2 = *head;

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	if (temp2 == NULL)
	{
		*head = temp;
	}
	else
	{
		for (i = 0; temp2->next != NULL; i++)
		{
			temp2 = temp2->next;
		}
		temp2->next = temp;
	}
	return (*head);
}
