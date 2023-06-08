#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: the key
 * @size: the size of the array of the hash table
 * This function should use the hash_djb2 function
 *
 * Return: index at which the key/value pair should be stored
 * in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
