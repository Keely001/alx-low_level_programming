#include "main.h"
/**
 * swap_int - swapping no.
 * @a: parameter 1
 * @b: parameter 2
 * Return: non
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
