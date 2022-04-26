#inlcude "lists.h"
/**
 * find_listint_loop - finds loop address of the LL
 * @head: pointer to a head node
 * Return: pointer type
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast, *slow;

	if (head == NULL)
		return (NULL);
	fast = head;
	slow = head;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			return (slow);
		}
	}
	return (NULL);
}
