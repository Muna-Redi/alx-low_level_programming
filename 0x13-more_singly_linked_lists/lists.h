#ifndef LISTS_H

#define LISTS_H

#include <stdio.h>

#include <unistd.h>

#include <stdlib.h>

#include <string.h>

/**
 * struct listint_s - a single linked list
 * @n: integer value of each node
 * @next: pointer to the next node in the list
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif
