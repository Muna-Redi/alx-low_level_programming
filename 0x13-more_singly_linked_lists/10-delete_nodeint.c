#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at an index
 * of the list
 * @head: beginning of the list
 * @index: list index
 * Return: 1 if successful and -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(current);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}
	temp = current;
	temp = temp->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
