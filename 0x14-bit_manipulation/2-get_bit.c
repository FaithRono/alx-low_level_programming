#include "main.h"

/**
  * get_bit - function that returns the value of
  *           a bit at a given index.
  * @index: is the index, starting from 0
  *           of the bit you want to get
  * @n: the pointer to unsigned int
  * Return: the value of the bit at index index
  *          or -1 if an error occured
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int b = 1;

	if (index > sizeof(n) * 8)
		return (-1);
	b <<= index;
	if (b & n)
		return (1);
	else
		return (0);
}
