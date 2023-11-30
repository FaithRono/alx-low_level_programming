#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	int curr = 0;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		temp = ht->array[idx];
		while (temp != NULL)
		{
			if (curr == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			curr = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}

