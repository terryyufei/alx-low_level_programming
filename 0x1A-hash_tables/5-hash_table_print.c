#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 * print the key/value in the order that they appear in the array of hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp_node = NULL;
	char *comma_flag = "";
	unsigned long int index = 0;

	if (ht)
	{
		printf("{");
		while (index < ht->size)
		{
			tmp_node = ht->array[index];

			while (tmp_node)
			{
				printf("%s", comma_flag);
				comma_flag = ", ";

				if (tmp_node->key)
					printf("'%s': '%s'", tmp_node->key, tmp_node->value);
				tmp_node = tmp_node->next;
			}
			index++;
		}
		printf("}\n");
	}
}
