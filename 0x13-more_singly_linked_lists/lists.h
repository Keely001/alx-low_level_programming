#ifndef LISTS_H
#define LISTS_H


#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct list - singly linked node
 * @n: number
 * @next: aaddress of the next node
 */
typedef struct list
{
	unsigned int n;
	struct list *next;
} listint_t;

size_t listint_len(const listint_t *h);
size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);

#endif
