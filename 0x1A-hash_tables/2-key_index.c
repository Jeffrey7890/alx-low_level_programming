#include "hash_tables.h"

/**
 * key_index - maps the char array with, array size to an index in hash table
 * @key: char array, for key in hash table
 * @size: size of hash table
 * Return: array index for the hash table
 * this function uses hashing by division
 * with the integer universe assumption.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	return (hash % size);
}
