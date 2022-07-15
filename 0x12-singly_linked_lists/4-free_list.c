#include "lists.h"

/**
* free_list - frees a list
* @head: list to be freed
* Return: void
*/
void free_list(list_t *head)
{
	list_t *ph;

	while (head->next != NULL)
	{
		ph = head;
		head = head->next;
		free(ph);
	}
	free(head);
}
