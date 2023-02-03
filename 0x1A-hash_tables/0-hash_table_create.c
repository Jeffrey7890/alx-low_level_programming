
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include "hash_tables.h"


/**
 * hash_table_create - creates a hash table of specific size
 * @size: size of the array storing the nodes
 * Return: new table or null if filed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	if (size == ULONG_MAX)
		return (NULL);

	if (new_table == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t) * new_table->size);

	if (new_table->array == NULL)
	{
		free(new_table->array);
		free(new_table);
		return (NULL);
	}

	return (new_table);
}
