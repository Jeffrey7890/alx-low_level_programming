#include "lists.h"
#include "stddef.h"
#include "stdio.h"

/**
  * print_list - prints elements of a list
  * @h: list to be printed
  * Return: number of element in list
  */
size_t print_list(const list_t *h)
{
	const list_t *traverse = h;

	size_t size = 0;

	for (; traverse != NULL; traverse = traverse->next)
	{
		if (traverse->str == NULL)
			printf("[0], (nil)\n");
		else
			printf("[%d], %s\n", traverse->len, traverse->str);
		size++;
	}
	return (size);
}

