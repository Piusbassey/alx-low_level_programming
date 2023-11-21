#include "lists.h"

/**
 * free_listint_safe - Frees a singly linked list.
 *
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes freed.
 */
size_t free_listint_safe(listint_t **head)
{
	listint_t *current;
	size_t num_freed = 0;

	current = *head;

	while (current != NULL)
	{
		listint_t *next = current->next;

		free(current);
		num_freed++;
		current = next;
	}

	*head = NULL;
	return (num_freed);
}
