#include "lists.h"

/**
* add_node_end - adds a node tot the begining of a list
* @head: pointer tot the first node
* @str: string
* Return: address of new node successfull and NULL if failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	char *pstr;
	list_t *newnode, *travnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	pstr = strdup(str);
	if (pstr == NULL)
	{
		free(newnode);
		return (NULL);
	}
	travnode = malloc(sizeof(list_t));
	if (travnode == NULL)
		return (NULL);
	travnode = *head;
	while (travnode != NULL)
	{
		if (travnode->next == NULL)
		{
			newnode->str = pstr;
			newnode->len = strlen(pstr);
			newnode->next = NULL;
			travnode->next = newnode;
			travnode = newnode;
			break;
		}
	}
	return (travnode);
	free(newnode);
	free(travnode);
}
