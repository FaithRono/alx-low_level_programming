#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
  * looped_listint_count - counts unique nodes
  * @head: the head of the list
  * Return: number of unique nodes and
  *         0 if it is not looped
  */
size_t looped_listint_count(listint_t *head)
	{
	listint_t *a, *b;
	size_t x = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	a = head->next;
	b = (head->next)->next;
	while (b)
	{
		if (a == b)
		{
			a = head;
			while (a != b)
			{
				x++;
				a = a->next;
				b = b->next;
			}

			a = a->next;
			while (a != b)
			{
				x++;
				a = a->next;
			}
			return (x);
		}
			a = a->next;
			b = (b->next)->next;
	}

	return (0);
}

/**
  * free_listint_safe - function that frees a listint_t list.
  * @h: pointer to the head
  * Return: the size of the list that was free’d
  */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t x, index;

	x = looped_listint_count(*h);

	if (x == 0)
	{
		for (; h != NULL && *h != NULL; x++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}

	else
	{
		for (index = 0; index < x; index++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		*h = NULL;
	}
	return (x);
}
