#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include "lists.h"


/**
 * struct list - singly linked list
 * @string: poimter to string to be printed
 * @next: the pointer to the next location
 * 
 * Description: a list to print the values.
 */
typedef struct list
{
	char *str;
	unsigned int len;
	struct list *next;
} list_t;

list_t *add_node_end(list_t **head, const char *str);
list_t *add_node(list_t **head, const char *str);
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);

#endif
