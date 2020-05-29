#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * hash_table_create - create hash table
 *
 * @size: size of array
 *
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash;
unsigned long int i = 0;
hash = malloc(sizeof(hash_table_t));
if (!hash)
return (NULL);
hash->array = malloc(size * sizeof(hash_node_t *));
if (!hash->array)
{
free(hash);
return (NULL);
}
while (i < size)
{
hash->array[i] = NULL;
i++;
}
hash->size = size;
return (hash);
}
