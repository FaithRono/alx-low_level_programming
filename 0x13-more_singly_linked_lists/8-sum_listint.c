#include "lists.h"

/**
  * sum_listint - function that returns the sum of all
  *               the data (n) of a listint_t linked list.
  * @head: the head of the list
  * Return: if the list is empty, return 0
  */
int sum_listint(listint_t *head)
{
	int y = 0;

	while (head)
	{
		y += head->n;
		head = head->next;
	}

	return (y);
}
