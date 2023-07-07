#include "main.h"

/**
 * _strspn - search a string for a set of bytes
 *
 * @s: char string array
 * @accept: char array to check bytes with
 *
 * Return: Number of bytes in the intial segment of `s`
 */

unsigned int _strspn(char *s, char *accept)
{
	int k;
	int l;
	int c;

	k = 0;
	c = 0;

	while (s[k] != '\0')
	{
		l = 0;
		while (accept[l] != '\0')
		{
			if (s[k] == accept[l])
			{
				c++;
				break;
			}
			l++;
		}
		if (accept[l] == '\0')
			break;
		k++;
	}
	return (c);
}
