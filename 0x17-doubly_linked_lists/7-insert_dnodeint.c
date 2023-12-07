#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: start of linked list
 * @idx: index of the list where the new node should be added
 * @n: value of new node
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *temp = NULL;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

/*insert at beginning*/
	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;

/*move to index position*/
	while (count < idx - 1)
	{
		count++;
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

/*insert at end*/
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

/*insert in middle*/
	new->next = temp->next;
	temp->next = new;
	new->prev = temp;
	if (new->next != NULL)
		(new->next)->prev = new;
	return (new);
}
