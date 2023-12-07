#include "lists.h"

/**
 * free_dlistint - free list
 *
 * @head: start of linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		free(temp);
		head = head->next;
	}
	free(head);
}
