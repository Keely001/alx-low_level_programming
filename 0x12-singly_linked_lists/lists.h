#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

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



size_t list_len(const list_t *h);
size_t print_list(const list_t *h);

#endif
