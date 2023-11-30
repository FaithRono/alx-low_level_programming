#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @hash_table: The hash table to add or update the key/value to
 * @key: The key to add or update
 * @value: The value associated with the key (must be duplicated)
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *hash_table, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new_node, *temp;
	
	if (hash_table == NULL || key == NULL || strlen(key) == 0)
		return (0);
	idx = key_index((const unsigned char *)key, hash_table->size);
	temp = hash_table->array[idx];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
		return (0);
	new_node->next = hash_table->array[idx];
	hash_table->array[idx] = new_node;
	
	return (1);
}

