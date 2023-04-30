#include "lists.h"

/**
 * sum_listint - calculate the sum
 * @head: pointer to first node
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
