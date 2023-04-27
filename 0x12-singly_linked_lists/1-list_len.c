#include "lists.h"

/**
 * list_len - calc the length
 * @h: elemets of list
 * Return: the number.
 */


size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
