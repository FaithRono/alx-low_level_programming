#include "search_algos.h"

/**
  * interpolation_search - a function searching for a value in a sorted array
  *                        of integers using interpolation search.
  * @array: a pointer to the first element of the array to search.
  * @size: the number of elements in the array.
  * @value: the value to search for.
  * Return: if the value is not present or the array is NULL, -1.
  *         else, the first index where the value is located.
  * Description: Prints a value every time it is compared in the array..
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t a, p, w;

	if (array == NULL)
		return (-1);

	for (p = 0, w = size - 1; w >= p;)
	{
		a = p + (((double)(w - p) / (array[w] - array[p])) * (value - array[p]));
		if (a < size)
			printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", a);
			break;
		}

		if (array[a] == value)
			return (a);
		if (array[a] > value)
			w = a - 1;
		else
			p = a + 1;
	}

	return (-1);
}
