#include "lists.h"

/**
 * size_t: A function that returns the no of elements.
 * @h: Pointer to h.
 *
 * Return: Returns the count.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
