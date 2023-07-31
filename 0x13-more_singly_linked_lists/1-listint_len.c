#include "lists.h"

/**
  * listint_len - function that returns the number of
  *               elements in a linked listint_t list.
  * @h: the head of the listint_t list
  * Return: the number of elements
  */
size_t listint_len(const listint_t *h)
{
	size_t p = 0;

	while (h)
	{
		p++;
		h = h->next;
	}
	return (p);
}
