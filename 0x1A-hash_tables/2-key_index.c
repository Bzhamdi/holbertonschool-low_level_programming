#include "hash_tables.h"

/**
 * key_index - gives the key index.
 *
 * @key: key.
 * @size: size of array of hash table.
 * Return: index at which the key should be stored in the array
 * of hash table.
 *
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
