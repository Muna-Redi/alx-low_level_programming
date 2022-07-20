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

	current = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		free(*head);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		current = current->next;
	}
	temp = current;
	current = current->next;
	if (temp != NULL)
	{
		free(temp);
		return (1);
	}
	else
		return (-1);

}
