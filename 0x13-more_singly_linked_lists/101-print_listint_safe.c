#include "lists.h"
#include <stdio.h>

size_t looped_listint_y(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
  * looped_listint_y - functions that counts unique nodes
  * @head: head the node
  * Return: number of unique nodes
  */
size_t looped_listint_y(const listint_t *head)
{
	const listint_t *a, *b;
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
  * print_listint_safe - function that prints a listint_t linked list
  * @head: the head of the linked list
  * Return: the number of nodes in the list
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t x, index = 0;

	x = looped_listint_y(head);

	if (x == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			index++;
		}
	}
	else
	{
		while (index < x)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			index++;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (x);
}
