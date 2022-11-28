#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stddef.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 */
typedef struct listint_s
{
	int n;

	struct listint_s *next;

} listint_t;

size_t listint_len(const listint_t *h);
size_t print_listint(const listint_t *h);
#endif
