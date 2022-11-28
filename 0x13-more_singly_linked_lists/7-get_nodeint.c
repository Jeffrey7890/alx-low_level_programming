#include "lists.h"
#include "stdio.h"

/**
  * get_nodeint_at_index - gets the node at the indext
  * @head: head of the list
  * @index: index to search for
  * Return: found node, not found return NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;

	unsigned int i = 0;

	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}



