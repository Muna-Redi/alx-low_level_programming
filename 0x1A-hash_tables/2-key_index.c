#include "hash_tables.h"

/**
* key_index - A function that gets the index of a key
* @key: The key whose index is required
* @size: size of the array of the hash-table
* Return: key index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int indx;

	indx = (hash_djb2(key)) % size;
	return (indx);
}
