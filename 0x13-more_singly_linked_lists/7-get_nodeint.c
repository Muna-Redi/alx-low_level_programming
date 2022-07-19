#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of  list
 * @head: head of the list
 * @index: the nth node
 * Return: address of the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next
		i++;
	}
	return (head);
}
