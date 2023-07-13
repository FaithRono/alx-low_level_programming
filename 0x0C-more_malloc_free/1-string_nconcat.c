#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat -  function that concatenates two strings.
  * @s1: first string to be concatenated
  * @s2: second string to be concatenated
  * @n: number of bytes
  *
  * Return: the pointer
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated_string;
	unsigned int len = n, index;

	if (s1 == NULL || s2 == NULL)
		return ("");
	for (index = 0; s1[index]; index++)
	concatenated_string = malloc(sizeof(char) * (len + 1));

	if (concatenated_string == NULL)
		return (NULL);
	len = 0
	for (index = 0; s1[index]; index++)
		concatenated_string[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concatenated_string[len++] = s2[index];

	concatenated_string[len] = '\0';
	return (concatenated_string);
}
