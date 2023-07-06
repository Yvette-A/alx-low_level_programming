#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: The hash table I want to add or update an elemment
 * @key: the key
 * @value: is thee value associated with the key
 * Return: 1 if the element was successfullly added
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *node;
	char *dup_value;
	unsigned long int index;
	/* checks if the ht, key, and value inputs are valid */
	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);
	/* makes a copy of the value string using the strdup function */
	dup_value = strdup(value);
	if (dup_value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (node = ht->array[index]; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
		{
			/* Updating existing key-value pair */
			free(node->value);
			node->value = dup_value;
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(dup_value);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		free(dup_value);
		return (0);
	}
	new_node->value = dup_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
