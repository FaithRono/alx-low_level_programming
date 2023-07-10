#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - function that concatenates two strings.
  * @s1: the first string to be concatenated
  * @s2: the second string to be concatenated
  *
  * Return: the two strings concatenated
  */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *f;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;
	while (s2[b])
		b++;
	d = a + b;
	f = malloc((sizeof(char) * 1) + 1);

	if (f == NULL)
		return (NULL);
	b = 0;

	while (c < d)
	{
		if (c <= a)
		f[c] = s1[c];

		if (c >= a)
		{
			f[c] = s1[b];
			b++;
		}
		c++;
	}
	f[c] = '\0';
	return (f);
}
