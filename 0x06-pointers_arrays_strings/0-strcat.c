#include "main.h"
/**
 * _strcat - concatenate strings
 * @dest: fst string
 * @src: scd string
 * Return: The string
 */
char *_strcat(char *dest, char *src)
{
	int count, count2;

	count = 0;
	count2 = 0;

	while (*dest != '\0')
	{
		count++;
	}
	while (*src != '\0')
	{
		*(dest + count) = *(src + count2);
		count++;
		count2++;
	}
	dest[count] = '\0';
	return (dest);
}
