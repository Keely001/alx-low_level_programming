#include "function_pointers.h"
/**
 * int_index - gives out the index for the number
 * @size: size of array
 * @array: array
 * @cmp: function pointer
 * Return:int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
