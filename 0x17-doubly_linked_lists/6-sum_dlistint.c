#include "lists.h"

/**
 * sum_dlistint - finds sum of all the data (n) of a dlistint_t linked list
 *
 * @head: start of linked list
 * Return: sum of all data in linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
