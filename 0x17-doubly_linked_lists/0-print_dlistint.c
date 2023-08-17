#include "lists.h"
/**
 * print_dlistint - prints values of a doubly link.
 * @h: pointer to header
 * Return: total nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t total = 0;

	while (h)
	{
		printf("%d\n", h->n);
		total++;
		h = h->next;
	}
	return (total);
}
