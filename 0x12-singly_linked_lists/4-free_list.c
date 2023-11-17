#include "lists.h"

/**
 * free_list - Frees the list.
 * @head: A pointer to the head.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
