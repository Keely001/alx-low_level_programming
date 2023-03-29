#include "main.h"
/**
 * reverse_array - reversing an array
 * @a: the array
 * @n: no. of elements
 * Return: none
 */
void reverse_array(int *a, int n)
{
	int midNum;
	int i;
	int count;
	int reserve;

	count = 0;
	midNum = 0;
	if (n % 2 == 0)
		midNum = n / 2;
	else
		midNum = (n / 2) - 1;
	i = 0;
	while (a[i] != '\0')
	{
		count++;
		i++;
	}
	count--;
	for (j = 0; j < midNum; j++)
	{
		reserve = a[count];
		a[count] = a[j];
		a[j] = reserve
		count--;
	}
}
