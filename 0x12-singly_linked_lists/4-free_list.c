#include "lists.h"

/**
 * free_list - free a inked list
 * @head: frees memory used in linked list
 * Return: None.
 */

void free_list(list_t *head)
{
	list_t *clear;

	while (head)
	{
		clear = head->next;
		free(head->str);
		free(head);
		head = clear;
	}
}
