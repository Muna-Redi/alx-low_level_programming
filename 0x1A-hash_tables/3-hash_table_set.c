#include "hash_tables.h"

/**
* hash_table_set - A function of that adds an element to the hash-table
* @key: The key of the element to be added
* @value: Value of the element
* Return: 1 if success and 0 if otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx, ht_size;
	char *val_copy = NULL;
	hash_node_t *new_element = NULL;

	if (key == NULL || key == "")
		return (0);

	ht_size = ht->size;
	idx = key_index((unsigned char *)key, ht_size);

	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
		return (0);

	val_copy = (char *)value;
	new_element->key = (char *)key;
	new_element->value = val_copy;
	new_element->next = NULL;

	if (ht->array[idx] == NULL)
		ht->array[idx] = new_element;
	else
	{
		new_element->next = ht->array[idx];
		ht->array[idx] = new_element;
	}

	return (1);
}
