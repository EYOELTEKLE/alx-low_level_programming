#include "lists.h"
/**
 * free_listint2 - frees all but sets the head to NULL
 * @head: double pointer to list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	int i;
	listint_t *temp = *head;

	if (temp == NULL)
	{
		*head = NULL;
	}
	for (i = 0; temp != NULL; i++)
	{
		*head = (*head)->next;
		free(temp);
		temp = *head;
	}
	*head = NULL;
}
