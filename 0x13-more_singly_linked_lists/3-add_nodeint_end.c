#include "lists.h"
#include "stdio.h"
#include "stdlib.h"

/**
  * add_nodeint_end - add new element to the end of list
  * @head: head of the list
  * @n: value of the elements
  * Return: address of the new element
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *t = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);


	if (t == NULL)
	{
		new_node->n = n;
		*head = new_node;
		return (new_node);
	}

	while (t->next != NULL)
		t = t->next;

	new_node->n = n;
	t->next = new_node;

	return (new_node);
}

