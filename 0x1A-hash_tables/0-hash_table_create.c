#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: size of the array
 *
 * Return:  a pointer to the newly created hash table || NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = NULL;

	if (size == 0)
		return (NULL);
	new_ht = malloc(sizeof(hash_table_t));
	if (!new_ht)
		return (NULL);

	new_ht->size = size;
	new_ht->array = calloc((size_t)size, sizeof(hash_node_t *));

	if (new_ht->array == NULL)
		return (NULL);

	return (new_ht);
}
