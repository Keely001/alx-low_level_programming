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

	while (*head != NULL)
	{
		post = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = post;
	}
	*head = pre;

	return (*head);
}
