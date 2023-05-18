#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at the given index in a list.
 * @head: Pointer to the address of the head node of the list.
 * @index: Index of the node to delete.
 *
 * Return: 1 if deletion succeeded, -1 if it failed.
 */


int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}


	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (-1);
	if (current->next != NULL)
		current->next->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = current->next;
	free(current);
	return (1);
}

