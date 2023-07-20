#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_strings -  function that prints strings, followed by a new line.
  * @separator: is the string to be printed between the strings
  * @n: is the number of strings passed to the function
  * @...: the allowed elipsis
  * Return: 0 (success)
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int c;

	va_start(strings, n);

	for (c = 0; c < n; c++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (c != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}


