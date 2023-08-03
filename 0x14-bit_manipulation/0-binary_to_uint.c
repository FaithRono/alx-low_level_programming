#include "main.h"

/**
  * binary_to_uint - function that converts a
  *                   binary number to an unsigned int
  * @b: is pointing to a string of 0 and 1 chars
  * Return: the converted number, or 0 if there is one
  *         or more chars in the string b that is not 0 or 1
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int y = 0, x = 1;
	int z;

	if (*b == '\0')
		return (0);

	for (z = 0; b[z];)
		z++;

	for (z -= 1; z >= 0; z--)
	{
		if (b[z] != '0' && b[z] != '1')
			return (0);
		y += (b[z] - '0') * x;
		x *= 2;
	}
	return (y);
}
