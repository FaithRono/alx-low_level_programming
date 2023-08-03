#include "main.h"

/**
  * flip_bits - function that returns the number of bits
  * @n: the integer
  * @m: integer flipped into
  * Return: necesesary bits flipped
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, y = 0;

	while (xor > 0)
	{
		y += (xor & 1);
		xor >>= 1;
	}

	return (y);
}
