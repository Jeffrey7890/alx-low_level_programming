#include "hash_tables.h"
#include <stdio.h>
#include <string.h>

/**
 * hash_table_print - prints the hash_table to stdout
 * @ht: hash_table data structure
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, size, buc_cnt = 0;

	hash_node_t *node;

	printf("{");
	if (ht != NULL)
	{
		size = ht->size;
		for (i = 0; i < size; i++)
		{
			buc_cnt = 0;
			node = ht->array[i];
			while (node != NULL)
			{
				buc_cnt++;
				printf("'%s': '%s'", node->key, node->value);
				if (node->next != NULL)
					printf(", ");
				node = node->next;
			}
			if (buc_cnt != 0)
				printf(", ");
		}
		printf("\b\b"); /* Removes the last comma */
	}
	printf("}\n");
}

