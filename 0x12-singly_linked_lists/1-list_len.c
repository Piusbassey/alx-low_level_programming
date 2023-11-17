#include "lists.h"

/**
 * list_len - Counts the no of elements in a linked list.
 * @h: The head of the linked list.
 *
 * Return: The no. of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
