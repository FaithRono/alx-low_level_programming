#include "main.h"
#include <stddef.h>

/**
  * binary_to_uint - function that converts a
  *                   binary number to an unsigned int
  * @b: is pointing to a string of 0 and 1 chars
  * Return: the converted number, or 0 if there is one
  *         or more chars in the string b that is not 0 or 1
  */
unsigned int binary_to_uint(const char *b)
{
	
	unsigned int count = 0;
	unsigned int check = 1;
	int i;

	if (b == NULL)
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		count <<= 1;
		if (b[i] == '1')
		{
			count ^= check;
		}
		i++;
	}
	return (count);
}
