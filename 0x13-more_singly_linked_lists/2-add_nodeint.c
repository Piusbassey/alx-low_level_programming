#include "lists.h"

/**
 * listint_t - New node from head.
 * @head: Pointer to the pointner of the head.
 * @n: Value to be assigned to the new node.
 *
 * Return: The address or NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
