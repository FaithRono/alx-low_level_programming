#include "lists.h"
#include <stdio.h>

/**
  * print_listint - function that prints all the
  *                 elements of a listint_t list.
  * @h: pointer to the head of the list
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	unsigned int k = 0;

	while (h)
	{
		k++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (k);
}
