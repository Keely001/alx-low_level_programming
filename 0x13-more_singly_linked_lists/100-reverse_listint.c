#include "lists.h"

/**
 * reverse_listint - reverse the node
 * @head: pointer to the pointer of the nodes
 * Return:pointer to the first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre;
	listint_t *post;
	listint_t *current = *head;

	pre = NULL;
	post = NULL;

	while (current != NULL)
	{
		post = current->next;
		current->next = pre;
		pre = current;
		current = post;
	}
	*head = pre;
	return (*head);
}
