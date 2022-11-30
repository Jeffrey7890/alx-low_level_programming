#include "lists.h"
#include "stdlib.h"
#include "stdio.h"

/**
  * search - search if value in the check list
  * @head: head of check list
  * @value: value to find in list
  * Return: 1 if found and 0 if not
  */
int search(listint_t **head, int value)
{
	listint_t *h = *head;

	while (h != NULL)
	{
		if (h->n == value)
			return (1);
		h = h->next;
	}
	return (0);
}

/**
  * print_listint_safe - prints a listint_t linked list
  * @head: head of linked list
  * Return: size of the list
  */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *new_node = NULL;

	const listint_t *temp = head;

	int i = 0;

	while (temp != NULL)
	{
		if (search(&new_node, temp->n))
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			exit(98);
		}
		add_nodeint(&new_node, temp->n);
		printf("[%p] %d\n", (void *)temp, temp->n);
		i++;
		temp = temp->next;
	}
	return (i);
}
