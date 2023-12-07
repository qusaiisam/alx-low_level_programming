#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *
 * @head: start of linked list
 * @index: nth position of node to be returned
 * Return: address of node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (count < index)
	{
		count++;
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
