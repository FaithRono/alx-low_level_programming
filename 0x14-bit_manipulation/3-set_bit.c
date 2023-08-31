#include "main.h"

/**
 * set_bit - function that sets bits of index
 * @n: the bit to be set 
 * @index: the index of the bit to be set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index  < sizeof(n) *  8)
	{
		*n =  *n | (1 << index);
		return (1);
	}
	return (-1);
}
