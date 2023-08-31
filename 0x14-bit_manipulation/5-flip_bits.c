#include "main.h"

/**
 * flip_bits - function that flips bits of numbers
 * @n: the number to be flipped
 * @m: the number to flip into
 * Return: the fliped number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
