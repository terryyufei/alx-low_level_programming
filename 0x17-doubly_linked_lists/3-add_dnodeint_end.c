#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list
 * @head: pointer to pointer to the head of the node
 * @n: element to be added
 *
 * Return: address of the new element || NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		dlistint_t *tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
		new_node->prev = tmp;
	}
	return (new_node);
}
