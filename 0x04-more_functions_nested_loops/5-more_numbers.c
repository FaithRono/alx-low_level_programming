#include "main.h"
/**
  *more_numbers - starting point
  *Description: prints 0-14 ten times
  *Return: 0
  */
void more_numbers(void)
{
	int i;
	int b;

	for (i = 0; i <= 9; i++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
			_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}