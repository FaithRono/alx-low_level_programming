#include "main.h"

/**
  * _isdigit - checks for digit 0 through 9
  * @c: The number to be checked
  *Return: 1 if character is a digit and 0 for anything else
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
