#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_node_alloc - dynamically allocates mem for new node
 * @key: key of the node
 * @value: value to store
 * Return: point to new node
 */
hash_node_t *hash_node_alloc(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL) /* failed allocation */
	{
		free(new_node);
		return (NULL);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	return (new_node);
}

/**
 * free_node - frees a node in the hash table
 * @node: node to free
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
	node = NULL;
}
/**
 * hash_table_set - sets the entry at index to value
 * @ht: hast table data structure
 * @key: key to insert
 * @value: char string to set
 * Return: 1 if success and 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind;

	hash_node_t *new_node, *hash_node;

	if ((ht == NULL) || (key == NULL) || (value == NULL))
		return (0);

	if (strcmp(key, "") == 0)
		return (0);

	ind = key_index((unsigned char *)key, ht->size);
	hash_node = ht->array[ind];

	new_node = hash_node_alloc(key, value);/* mallocated mem */
	if (new_node == NULL)
		return (0);

	if (hash_node == NULL) /* no collision */
	{
		ht->array[ind] = new_node;
		return (1);
	}
	/* collision detection*/
	if (strcmp(hash_node->key, key) == 0)
	{
		free(hash_node->value);
		hash_node->value = strdup(value);
		free_node(new_node); /* no need to use new_node */
		return (1);
	}
	/* collision resolution */
	new_node->next = hash_node;
	ht->array[ind] = new_node;
	hash_node = NULL; /* point hash_node to null */

	return (1);
}

