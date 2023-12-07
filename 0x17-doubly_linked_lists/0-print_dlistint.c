#include "lists.h"

/**
 * print_dlistint - prints all elements of a doubly linked list
 *
 * @h: start of doubly linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int numNodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		numNodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (numNodes);
}
