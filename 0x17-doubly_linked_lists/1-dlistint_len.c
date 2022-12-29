#include "lists.h"

/**
 * dlistint_len  returns the number of the elements in 
 * a dounle ll
 * @h: head
 * Return:
 * no of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;
	{
		count++;
		h = h->next;
	}

	return (count);
}
