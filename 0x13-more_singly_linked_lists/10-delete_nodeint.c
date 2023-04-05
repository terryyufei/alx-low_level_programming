#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index
 * @index: index of the node to be deleted
 * @head: pointer to the head
 * Return: 1 on success, -1 on failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;

	listint_t *node, *prevnode;

	if (head == NULL || *head == NULL)
		return (-1);
	node = *head;
	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}
	prevnode = node;
	node = node->next;
	for (i = 1; i < index; i++)
	{
		if (node == NULL)
			return (-1);
		prevnode = node;
		node = node->next;
	}
	prevnode->next = node->next;
	free(node);
	return (1);
}



