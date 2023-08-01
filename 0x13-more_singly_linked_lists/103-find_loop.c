#include "lists.h"

/**
  * find_listint_loop - function that finds the loop in a linked list.
  * @head: the head of the linked lists
  * Return: The address of the node where the loop
  *         starts, or NULL if there is no loop
  */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a, *b;

	if (head == NULL || head->next == NULL)
		return (NULL);
	a = head->next;
	b = (head->next)->next;

	while (b)
	{
		if (a == b)
		{
			a = b;

			while (a != b)
			{
				a = a->next;
				b = b->next;
			}
			return (a);
		}

		a = a->next;
		b = (b->next)->next;
	}
	return (NULL);
}
