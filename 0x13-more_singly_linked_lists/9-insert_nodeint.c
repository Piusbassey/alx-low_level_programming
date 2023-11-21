#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the head of the list.
 * @idx: Index where to the new node should be added.
 * @n: Value to be assigned to the new node.
 *
 * Return: The address of the new node, or NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;

	current = *head;
	new_node = malloc(sizeof(listint_t));

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_nodeint_end(head, n));
	}
	if (current == NULL)
	{
		return (NULL);
	}
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
