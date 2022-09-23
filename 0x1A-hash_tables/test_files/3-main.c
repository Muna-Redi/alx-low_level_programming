#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
	unsigned long int idx;

    ht = hash_table_create(1024);
    hash_table_set(ht, "Betty", "cool");
	idx = key_index((unsigned char *)"Betty", ht->size);
	printf("THE added element has content %s\n", ht->array[idx]->value);
    hash_table_set(ht, "hetairas", "APPLE");
	idx = key_index((unsigned char *)"hetairas", ht->size);
	printf("idx: %ld of key hetairas has content %s\n", idx, ht->array[idx]->value);
    hash_table_set(ht, "mentioner", "ORANGE");
	idx = key_index((unsigned char *)"mentioner", ht->size);
	printf("idx: %ld of key: mentioner has content %s\n", idx, ht->array[idx]->value);
    hash_table_set(ht, "heliotropes", "CHICKEN");
	idx = key_index((unsigned char *)"heliotropes", ht->size);
	printf("idx: %ld of key: heliotropes has content %s\n", idx, ht->array[idx]->value);
    hash_table_set(ht, "neurospora", "BEEF");
	idx = key_index((unsigned char *)"neurospora", ht->size);
	printf("idx: %ld of key: neurospora has content %s\n", idx, ht->array[idx]->value);
    hash_table_set(ht, "depravement", "AMALA");
	idx = key_index((unsigned char *)"depravement", ht->size);
	printf("idx: %ld of key: depravement has content %s\n", idx, ht->array[idx]->value);
    hash_table_set(ht, "serafins", "EBA");
	idx = key_index((unsigned char *)"serafins", ht->size);
	printf("idx: %ld of key: serafins has content %s\n", idx, ht->array[idx]->value);
    hash_table_set(ht, "stylist", "EGUSI");
	idx = key_index((unsigned char *)"stylist", ht->size);
	printf("idx: %ld of key: stylist has content %s\n", idx, ht->array[idx]->value);
    hash_table_set(ht, "subgenera", "BITTERLEAF");
	idx = key_index((unsigned char *)"subgenera", ht->size);
	printf("idx: %ld of key: subgenera has content %s\n", idx, ht->array[idx]->value);
    return (EXIT_SUCCESS);
}
