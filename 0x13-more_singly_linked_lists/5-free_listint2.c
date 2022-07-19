#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: begining of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *h;

	temp = *head;
	if (temp == NULL)
		free(*head);
	else
	{
		h = temp;
		*head = NULL;
		free(*head);
		while (temp != NULL)
		{
			h = temp;
			temp = temp->next;
			free(h);
		}
		free(temp);
	}
}