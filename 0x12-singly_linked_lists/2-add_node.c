#include "lists.h"
#include "string.h"
#include "stdlib.h"

/**
 * add_node - adds a new node to list
 * @head: head of list
 * @str: sring of node
 * Return: head of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL || str == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
