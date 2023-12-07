#include "lists.h"

/**
 * dlistint_len - find number of elements in linked dlistint_t list
 *
 * @h: start of doubly linked list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int numNodes = 0;

	while (h != NULL)
	{
		numNodes++;
		h = h->next;
	}
	return (numNodes);
}
