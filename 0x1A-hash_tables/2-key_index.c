#include "hash_tables.h"

/**
 * key_index -  function that gives the index of a key in the hash table array
 * @key: The key
 * @size: The size of the hash table array
 * Return: Index at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val;

	hash_val = hash_djb2(key);
	return (hash_val % size);
}

