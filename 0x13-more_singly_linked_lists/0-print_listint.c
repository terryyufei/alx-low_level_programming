#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: pointer to head
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
