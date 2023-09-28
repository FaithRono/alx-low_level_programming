#include "main.h"

/**
 * clear_bit - function that clears the bits of values
 * @n: the bit to be cleared
 * @index: index of the bit to be cleared
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}

