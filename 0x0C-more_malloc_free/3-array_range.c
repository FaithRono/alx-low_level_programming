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
	int *array, size, y;

	if (min > max)
		return (NULL);
	size = min - max + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (y = 0; y < size; y++)
		array[y] = min++;

	return (array);
}


