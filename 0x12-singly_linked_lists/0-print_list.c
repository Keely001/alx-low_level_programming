#include "lists.h"

/**
 * print_list - print content of a linked list.
 * h: pointer to relevant info for the print function
 *
 * Return: none.
 */
size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	if (h == NULL)
		printf("[0] (nil)\n");
	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
