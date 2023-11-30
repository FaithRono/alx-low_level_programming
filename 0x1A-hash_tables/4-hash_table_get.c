#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @hash_table: The hash table
 * @key: The key to search for
 * Return: The value associated with the key, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *hash_table, const char *key)
{
	unsigned long int idx;
	hash_node_t *temp;
	if (hash_table == NULL || key == NULL || strlen(key) == 0)
		return (NULL);
	idx = key_index((const unsigned char *)key, hash_table->size);
	
	temp = hash_table->array[idx];
	
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

