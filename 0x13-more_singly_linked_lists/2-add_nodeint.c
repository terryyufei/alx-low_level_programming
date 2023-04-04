#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the list
 * @head: double pointer to the head
 * @n: data to be stored in the new node
 * Return: address of the new element, or NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode =  (listint_t *)malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	 newnode->n = n;
	 newnode->next = *head;
	*head = newnode;

	return (newnode);
}
