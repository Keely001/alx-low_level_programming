#include "lists.h"

/**
 * sum_dlistint - sums a lis
 * @head: pointer to the fisrt list node
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int t = 0;

	while (head)
	{
		t += head->n;
		head = head->next;
	}
	return (t);
}
