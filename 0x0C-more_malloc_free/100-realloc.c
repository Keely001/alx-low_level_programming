#include "main.h"
/**
 * _realloc - realloc working principle
 * @ptr: string
 * @old_size: old memory size
 * @new_size: new memory size
 * Return: Null or pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	char *old;
	unsigned int i;

	old = ptr;
	i = 0;
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		while (i < old_size)
		{
			new[i] = old[i];
			i++;
		}
	}
	if (new_size < old_size)
	{
		while (i < new_size)
		{
			new[i] = old[i];
		}
	}
	free(ptr);
	return (new);
}
