#include "hash_tables.h"

/**
* hash_table_get - This function gets the value associated with a key
* @ht: pointer to the hash-table
* @key: The key to the given element/value
* Return: The value associated with the key
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node_tmp = NULL;

	idx = key_index((unsigned char *)key, ht->size);

	if (idx > ht->size)
		return (NULL);

	node_tmp = ht->array[idx];

	if (!node_tmp)
		return (NULL);

	while (node_tmp)
	{
		if (strcmp(key, node_tmp->key) == 0)
			return (node_tmp->value);

		node_tmp = node_tmp->next;
	}

	return (NULL);
}
