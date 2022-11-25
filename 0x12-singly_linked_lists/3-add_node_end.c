#include "lists.h"
#include "string.h"
#include "stdlib.h"

/**
 * add_node_end - adds a new node to list end
 * @head: head of list
 * @str: sring of node
 * Return: head of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *traverse;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL || str == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	if (*head == NULL)
		*head = new_node;
	else
	{
		traverse = *head;
		while (traverse->next != NULL)
			traverse = traverse->next;
		traverse->next = new_node;
	}
	return (*head);
}
