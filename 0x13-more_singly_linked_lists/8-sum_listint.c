#include "lists.h"
/**
 * sum_listint - sums all the data of the LL
 * @head: pointer to the head node
 * Return: integer
 */
int sum_listint(listint_t *head)
{
	int sum = 0, i;
	listint_t *tmp = head;

	if (tmp == NULL)
	{
		return (0);
	}
	else
	{
		for (i = 0; tmp != NULL; i++)
		{
			sum = sum + tmp->n;
			tmp = tmp->next;
		}
	}
	return (sum);
}
