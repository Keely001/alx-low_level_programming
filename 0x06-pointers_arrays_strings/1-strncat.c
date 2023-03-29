#include "main.h"
/**
 * _strncat - concat strings
 * @src: string1
 * @dest: string2
 * @n: number to concat
 * Return: concated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length1 = 0;
	int length2 = 0;

	while (dest[length1] != '\0')
	{
		length1++;
	}
	while(length2 < n && src[length2] != '\0')
	{
		dest[length1] = src[length2];
		length1++;
		length2++;
	}
	dest[length1] = '\0';

	return (dest);
}
