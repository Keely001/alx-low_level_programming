#include "lists.h"

void turtle(void) __attribute__ ((constructor));

/**
 * turtle - executes before the main function.
 *  Return: None.
 */
void turtle(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
