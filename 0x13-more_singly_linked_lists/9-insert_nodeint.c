#include "lists.h"
#include "stdio.h"
#include "stdlib.h"

/**
  * insert_nodeint_at_index - insert a node at index
  * @head: head of list
  * @idx: index of list
  * @n: int value
  * Return: address of new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *prev, *new_node = malloc(sizeof(listint_t));

	unsigned int i = 0;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (*head == NULL)
	{
		new_node->n = n;
		*head = new_node;
		return (new_node);
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			prev = temp;
			temp = temp->next;
			i++;
			if (i == idx)
			{
				new_node->n = n;
                        	prev->next = new_node;
                        	new_node->next = temp;
                        	return (new_node);
			}

		}	
	}
	return (NULL);
}
