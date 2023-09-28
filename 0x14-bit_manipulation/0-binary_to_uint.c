#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - function that converts a binary
 *                   number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 * Return: the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length = 0, mult = 1;
	int idx;

	if (b == NULL)
		return (0);

	for (idx = 0; b[idx];)
		idx++;

	for (idx -= 1; idx >= 0; idx--)
	{
		if (b[idx] != '0' && b[idx] != '1')
			return (0);

		length += (b[idx] - '0') * mult;
		mult *= 2;
	}

	return (length);
}

