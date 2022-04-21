#include "lists.h"
/**
 * free_list - deletes all the elements of the Linkedlist
 * @head: pointer to the header of the linked List
 * Return: void
 */
void free_list(list_t *head)
{
	int i;
	list_t *temp;

	for (i = 0; head != NULL; i++)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
