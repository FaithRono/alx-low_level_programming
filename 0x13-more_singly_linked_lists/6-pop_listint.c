#include "lists.h"

/**
  * pop_listint - function that deletes the head node of a listint_t
  * @head: the head of the lists
  * Return: 0 if the list is empty
  *          and returns the head node’s data (n).
  */
int pop_listint(listint_t **head)
{
	listint_t *a;
	int b;

	if (*head == NULL)
		return (0);

	a = *head;
	b = (*head)->n;
	*head = (*head)->next;

	free(a);

	return (b);
}


