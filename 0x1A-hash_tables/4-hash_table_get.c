#include "hash_tables.h"
#include <stddef.h>
#include <string.h>

/**
 * hash_table_get - gets the value of the key
 * @ht: hash table structure
 * @key: key to find
 * Return: value if found else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind;

	hash_node_t *hash_node;

	if (ht == NULL)
		return (0);

	ind = key_index((unsigned char *)key, ht->size);

	hash_node = ht->array[ind];

	while (hash_node != NULL)
	{
		if (strcmp(hash_node->key, key) == 0)
			return (hash_node->value);
		hash_node = hash_node->next;
	}
	return (NULL);
}
