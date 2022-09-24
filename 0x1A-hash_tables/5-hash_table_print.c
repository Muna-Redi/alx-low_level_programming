#include "hash_tables.h"

/**
* hash_table_print - prints a hash table
* @ht: The hash_table to be printed
* Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *h_node =	NULL;
	unsigned long int i = 0, j, size, flag;

	if (ht == NULL)
	{
		printf("{}");
		return;
	}

	printf("{");
	size = ht->size;
	for (; i < size; i++)
	{
		h_node = ht->array[i];
		flag = 0;

		while (h_node != NULL)
		{
			printf("'%s' : '%s'", h_node->key, h_node->value);
			if (h_node->next)
			{
				h_node = h_node->next;
				continue;
			}
			else
			{
				for (j = (i + 1); j < size; j++)
				{
					if ((ht->array[j] != NULL) && (flag == 0) && i < size - 1)
					{
						printf(",");
						flag = 1;
					}
				}
				break;
			}
		}
	}
	printf("}\n");
}
