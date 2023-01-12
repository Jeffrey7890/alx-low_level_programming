#include "lists.h"

/**
  * insert_dnodeint_at_index - inserts node at index
  * @h: head of list
  * @idx: index to insert at
  * @n: int data stored in node
  * Return: pointer to the new node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp = *h, *prev;

	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (tmp != NULL)
	{
		if (i == idx)
		{
			new_node->n = n;

			if (tmp->prev == NULL)
			{
				*h = add_dnodeint(&tmp, n);
				return (*h);
			}


			prev = tmp->prev;

			tmp->prev = new_node;
			new_node->next = tmp;

			prev->next = new_node;
			new_node->prev = prev;

			return (new_node);
		}
		i++;
		tmp = tmp->next;
	}
	/* return (add_dnodeint_end(h, n)); */
	return (NULL);
}
