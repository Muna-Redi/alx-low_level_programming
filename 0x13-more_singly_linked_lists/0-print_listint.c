#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: head of the list
 * Return: size of the list
 */
size_t print_listint(const listint_t *h)
{
	listint_t *trav;
	size_t n = 0;

	trav = malloc(sizeof(listint_t));
	if (trav == NULL)
		return (0);
	trav = NULL;
	*trav = *h;
	while (trav!= NULL)
	{
		printf("%d\n", trav->n);
		trav = trav->next;
		n++;
	}
	return (n);
	free(trav);
}
