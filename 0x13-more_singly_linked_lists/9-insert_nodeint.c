#include "lists.h"

/**
 * insert_nodeint_t_index - inserts a node at aan index of list
 * @head: beginning of trhe list
 * @idx: index of list
 * @int: data value
 * Return: address of list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp, *tail;
	unsigned int i = 0;

	temp = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	while (i < idx)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			return (NULL);
			break;
		}
		i++;
	}
	tail = temp->next;
	newnode->next = tail;
	temp->next = newnode;
	return (*head);
	free (newnode);
}
