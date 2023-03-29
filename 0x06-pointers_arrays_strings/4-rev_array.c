#include "main.h"
/**
 * reverse_array - reversing an array
 * @a: the array
 * @n: no. of elements
 * Return: none
 */
void reverse_array(int *a, int n)
{
	int i;
	int m;

	for (i = 0; i < n; i++)
	{
		m = a[i];
		a[i] = a[n];
		a[n] = m;
		n--;
	}
}

