#include "search_algos.h"

/**
 *binary_search - function that searches for a value in a sorted array
 *of integers using the Binary search algorithm
 *@array: is pointer to the first element in an array
 *@size: is the number of elements in an array
 *@value: Value being searched for
 *
 * Return: 0 on success and -1 on failure
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t left = 0, right = size - 1, mid;

	if (array != NULL)
	{
		while (left <= right)
		{
			mid = (left + right) / 2;
			printf("Searching in array: ");
			for (i = left; i < right; i++)
			{
				printf("%d, ", array[i]);
			}
			printf("%d\n", array[i]);

			if (array[mid] < value)
			{
				left = mid + 1;
			} else if (array[mid] > value)
			{
				right = mid - 1;
			} else
			{
				return (mid);
			}
		}
	}
	return (-1);
}
