#include "lists.h"
/**
 * free_listint - deletes nodes of the LL
 * @head: pointer to a node
 * Return: void
 */
void free_listint(listint_t *head)
{
	int i;
	listint_t *temp = head;

	for (i = 0; temp != NULL; i++)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
