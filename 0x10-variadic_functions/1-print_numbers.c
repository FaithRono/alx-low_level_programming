#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * print_numbers - function that prints numbers, followed by a new line.
  * @separator: the string to be seperated
  * @n: the number of integers passed to the funtion
  * @...: arguments recieved
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int b;

	va_start(nums, n);

	for (b = 0; b < n; b++)
	{
		printf("%d", va_arg(nums, int));

		if (b != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}


