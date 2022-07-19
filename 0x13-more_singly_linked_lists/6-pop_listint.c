#include "lists.h"

/**
 * pop_listint - deletes head of a list
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
		i = temp->n;
		h = temp->next;
		free(temp);
		free(*head);
	}
	return (i);
}
