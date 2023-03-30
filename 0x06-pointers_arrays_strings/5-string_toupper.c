#include "main.h"
/**
 * string_toupper - changes uppercase to lower
 * @a: string
 * Return: char
 */
char *string_toupper(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i - 32];
		}
		else
		{
			a[i] = a[i];
		}
		i++;
	}
	return (a);
}
