#include "main.h"
/**
 * *_strncpy - cpy function
 * @dest: string1
 * @src: string2
 * @n: no. of elements to copy
 * Return: char or new string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n)
		{
		*(dest + i) = *(src + i);
		}
		if (dest[n] == '\0')
			dest[n] = '\0';
	}
	return (dest);
}
