#include "lists.h"
#include <string.h>

/**
 * add_node_end - add a bode at the end
 * @head: the pointer to nodes
 * @str: string to be added to the extra node
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *end = *head;
	unsigned int length = 0;

	current = malloc(sizeof(list_t));
	if (current == NULL)
		return (NULL);
	while (str[length] != '\0')
		length++;
	current->str = strdup(str);
	current->len = length;
	current->next = NULL;

	if (end->next == NULL)
	{
		end = current;
		return (current);
	}
	while (end->next != NULL)
		end = end->next;
	end->next = current;
	return (current);
}
