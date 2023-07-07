#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table t print
 * Return: the printed hash table printed with the key and valuew pair
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	/* checks if the input ht is valid */
	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		/* printing the key-value pairs in the hash table */
		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			if (node != NULL)
				printf(", ");
		}
		/* Separate slots with a comma */
		if (i != ht->size - 1)
			printf(", ");
	}
	printf("}\n");
}
