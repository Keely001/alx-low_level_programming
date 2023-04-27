#include "lists.h"
#include <string.h>

/**
 * add_node - add note at the beginning
 * @head: first node
 * @str: string to be added
 * Return: pointer to thr new first node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *current;
	unsigned int length = 0;

	while (str[length] != '\0')
		length++;
	current = malloc(sizeof(list_t));
	if (current == NULL)
		return (NULL);
	current->str = strdup(str);
	current->len = length;
	current->next = (*head);
	(*head) = current;
	return (*head);
}
