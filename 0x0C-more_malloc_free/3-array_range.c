#include "main.h"
#include <stdlib.h>

  /*
   * *array_range - function that creates an array of integers.
   * @min: minimum amopuint  of  the array
   * @max: the maximum amount of the array
   *
   * Return: the pointer to the array
   */

int *array_range(int min, int max)
{
	int i;
	int *t;
	int len;

	if (min > max)
		return (NULL);
	len = 0;
	for (i = min; i <= max; i++)
		len++;

	t = malloc(sizeof(int) * len);
	if (t == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		t[i] = min;
		i++;
		min++;
	}
	return (t);
}
