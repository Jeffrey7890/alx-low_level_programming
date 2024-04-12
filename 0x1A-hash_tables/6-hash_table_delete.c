#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes the hash table
 * @ht: hash table structure
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	hash_node_t *tmp, *tmp2;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			tmp2 = tmp;
			free(tmp2->key);
			free(tmp2->value);
			free(tmp2);
			tmp = tmp->next;
		}
	}
	free(tmp);
	free(ht->array);
	free(ht);
}
