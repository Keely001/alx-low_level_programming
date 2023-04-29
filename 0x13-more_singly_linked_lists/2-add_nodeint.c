#include "lists.h"

/**
 * add_nodeint - add a node at the beginning
 * @head: pointer to a pointer of the current position
 * @n: value to be added
 * Return: pointer to currebt new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = *head;

	*head = new;
	return (*head);
}
