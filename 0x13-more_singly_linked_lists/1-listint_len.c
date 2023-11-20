#include "lists.h"

/**
 * listin_len - Returns the number of elements in a linked list.
 * @h: Pointer to the head of the list.
 * 
 * Return: The number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
