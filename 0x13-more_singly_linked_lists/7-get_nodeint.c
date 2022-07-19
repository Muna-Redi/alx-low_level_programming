#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of  list
 * @head: head of the list
 * @index: the nth node
 * Return: address of the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node
	unsigned int i = 0;

	node = head;
	if (node == NULL)
		return (NULL);
	while (i <= index)
	{
		if (i == index)
			node = head;
		node = head->next
		i++;
	}
	if (node == NULL)
		return (NULL);
	else
		return (node);

}
