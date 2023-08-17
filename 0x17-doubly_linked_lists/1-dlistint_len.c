#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 *
 * @b: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *b)
{
	int count;

	count = 0;

	if (b == NULL)
		return (count);

	while (b->prev != NULL)
		b = b->prev;

	while (b != NULL)
	{
		count++;
		b = b->next;
	}

	return (count);
}
