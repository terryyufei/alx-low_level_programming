#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: double pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *list;

	while (*head != NULL)
	{
		list = *head;
		*head = (*head)->next;
		free(list);
	}
}
