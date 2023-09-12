#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list using Jump search.
 * @list: Pointer to the head of the list.
 * @size: Number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where the value is located, or NULL if
 * the value is not found or if the list is NULL.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int jump_step, i;
	listint_t *current, *prev;

	if (list == NULL)
		return (NULL);

	jump_step = sqrt(size);
	current = list;
	prev = NULL;

	while (current && current->n < value)
	{
		prev = current;

		for (i = 0; current && i < jump_step; i++)
		{
			current = current->next;
		}

		printf("Value checked at index [%ld] = [%d]\n",
				(current ? current->index : size - 1),
				(current ? current->n : -1));
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			(prev ? prev->index : 0), (current ? current->index : size - 1));

	while (prev && prev->n < value)
	{
		prev = prev->next;
		printf("Value checked at index [%ld] = [%d]\n",
				(prev ? prev->index : size - 1), (prev ? prev->n : -1));
	}

	if (prev && prev->n == value)
		return (prev);

	return (NULL);
}
