#include "lists.h"

/**
 * pop_listint - Deletes the node of a specific linked list.
 * @head: Pointer variable to the  head of the list.
 *
 *
 * Return: The head node's data or 0 if it is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);
	return (data);
}
