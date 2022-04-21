#include "lists.h"
#include <string.h>
/**
 * add_node - adds a node to the first LinkedList
 * @str: pointer to a string
 * @head: pointer to the next next List
 * Return: list which is type of list_s
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));
	unsigned int i;

	if (new_node == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i];)
	{
		i++;
	}
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
