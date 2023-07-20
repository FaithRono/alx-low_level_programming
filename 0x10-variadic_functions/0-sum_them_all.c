#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - function that returns the sum of all its parameters.
  * @n: number of parameters used
  * @...: an elipsis that accepts variables
  *
  * Return: 0 (success)
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int a, sum = 0;

	va_start(nums, n);

	for (a = 0; a < n; a++)
		sum += va_arg(nums, int);
	va_end(nums);
	return (sum);
}
