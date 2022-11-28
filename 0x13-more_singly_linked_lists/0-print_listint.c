#include "lists.h"
#include <stddef.h>
#include "stdio.h"


/**
  * print_listint - prints all elements in a linked list
  * @h: head of list
  * Return: size of list
  */
size_t print_listint(const listint_t *h)
{
	const listint_t *t = h;

	size_t i = 0;

	while (t != NULL)
	{
		printf("%d\n", t->n);
		i++;
		t = t->next;
	}
	return (i);
}
