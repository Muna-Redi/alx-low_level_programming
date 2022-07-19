#include "lists.h"

/**
 * free_listint - frees a list
 * @head: begining of the list
 * Return: void
 */
int pop_listint(listint_t **head)
{
	listint_t *temp, *h;
	int i = 0;

	if (*head == NULL)
	{
		return (0);
		free(*head);
	}
	else
	{
		temp = *head;
		h = temp;
		i = temp->n;
		*head = h->next;
		free(temp);
	}
	return (i);
}
