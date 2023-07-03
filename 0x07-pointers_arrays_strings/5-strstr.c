#include "main.h"
#include <stdlib.h>

/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: string substring
 * Return: Pointer to beginning of substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int k, l, c;

	k = 0;
	c = 0;
	while (haystack[k] != '\0')
	{
		l = 0;
		while (needle[l + c] != '\0' && haystack[k + c] != '\0'
		       && needle[l + c] == haystack[k + c])
		{
			if (haystack[k + c] != needle[l + c])
				break;
			c++;
		}
		if (needle[l + c] == '\0')
			return (&haystack[k]);
		l++;
		k++;
	}

	return (NULL);
}
