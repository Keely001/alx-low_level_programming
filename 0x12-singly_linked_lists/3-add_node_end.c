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
list_t *endNode = *head;
unsigned int length = 0;

while (str[length] != '\0')
	length++;

current = malloc(sizeof(list_t));
if (!current)
	return (NULL);

current->str = strdup(str);
current->len = length;
current->next = NULL;

if (*head == NULL)
{
*head = current;
return (current);
}

while (endNode->next)
	endNode = endNode->next;

endNode->next = current;

return (current);
}

