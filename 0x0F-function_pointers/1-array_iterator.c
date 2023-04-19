#include "function_pointers.h"
/**
 * array_iterator - iterate through functions
 * @array: array
 * @size: size of array
 * @action: array to be executed
 * Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	int *currentArray;
	unsigned int i;

	currentArray = array;
	for (i = 0; i < size; i++)
	{
		action(currentArray[i]);
	}
}
