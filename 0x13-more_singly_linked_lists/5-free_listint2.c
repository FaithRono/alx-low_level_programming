#include "lists.h"
#include <stdlib.h>

/**
  * free_listint2 - function that frees a listint_t list
  * @head: the head of the list
  */
void free_listint2(listint_t **head)
{
	listint_t *a;

	if (head == NULL)
		return;

	while (*head)
	{
		a = (*head)->next;
		free(*head);
		*head = a;
	}

	head = NULL;
}
