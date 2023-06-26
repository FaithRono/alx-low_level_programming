#include "main.h"

/**
  * puts2 - Prints every other character
  * @str: The string to be treated
  *
  * Return: void
  */
void puts2(char *str)
{
	int t;
	int p = 0;

	while (str[p] != '\0')
	{
		p++;
	}

	for (t = 0; t < p; t += 2)
	{
		_putchar(str[t]);
	}

	_putchar('\n');
}
