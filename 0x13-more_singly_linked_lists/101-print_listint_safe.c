#include "lists.h"

size_t print_listint_safe(const listint_t *head);
size_t loop_listint_len(const listint_t *head);
/**
 * loop_listint_len - checked for an existing loop in the existing node
 * @head: pointer to the first node
 * Return: return 0 or no. of the unique nodes
 */
size_t loop_listint_len(const listint_t *head)
{
	const listint_t *first;
	const listint_t *second;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}
	first = head->next;
	second = (head->next)->next;

	while (second)
	{
		if (first == second)
		{
			first = head;
			while (first != second)
			{
				count++;
				first = first->next;
				second = second->next;
			}

			first = first->next;
			while (first != second)
			{
				count++;
				first = first->next;
			}

			return (count);
		}

		first = first->next;
		second = (second->next)->next;
	}

	return (0);
}
/**
 * print_listint_safe - prints the list even if it has a loop
 * @head: pointer to the  first node
 * Return: the count of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	size_t index;

	count = loop_listint_len(head);
	index = 0;
	if (count == 0)
	{
		for (; head != NULL; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < count; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (count);
}
