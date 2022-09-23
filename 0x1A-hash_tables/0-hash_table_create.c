#include "hash_tables.h"

/**
* hash_table_create - creates a hash-table
* @size: size of the hash-table
* Return: A pointer to the created table or NULL if something goes wrong
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table = NULL;
	hash_node_t **h_node = NULL;

	h_table = malloc(sizeof(hash_table_t));
	if (h_table == NULL)
		return (NULL);

	h_node = malloc(sizeof(hash_node_t *) * size);
	if (h_node == NULL)
		return (NULL);

	h_table->size = size;
	h_table->array = h_node;
	return (h_table);
}
