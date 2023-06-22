#include "main.h"

/**
  * _isupper - checks for uppercase letters
  * @c: Variable text
  * Return: 1 if uppercase or 0  for anything else
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
