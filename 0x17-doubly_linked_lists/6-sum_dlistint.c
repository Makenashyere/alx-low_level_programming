#include "lists.h"

/**
 * sum_dlistint - returns the sum of dlistint
 * @head: head
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head 1= NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
