#include "lists.h"

/**
* free_list - frees a list
* @head: list to be freed
* Return: void
*/
void free_list(list_t *head)
{
	list_t *ph;
	list_t *r;

	ph = head;
	while (ph != NULL)
	{
		r = ph->next;
		free(ph-str);
		free(ph);
		ph = r;
	}
}
