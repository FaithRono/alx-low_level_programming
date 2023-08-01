#include "lists.h"

/**
  * delete_nodeint_at_index - function that deletes the node
  *                           at index index of a listint_t linked list
  * @head: the head of the lists
  * @index: the index node deleted
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *k, *current = *head;
	unsigned int b;

	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (b = 0; b < (index - 1); b++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	k = current->next;
	current->next = k->next;
	free(k);
	return (1);
}
