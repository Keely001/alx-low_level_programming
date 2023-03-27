#include "main.h"
/**
 * _strcpy - making the function
 * @dest: parameter
 * @src: parameter 2
 * Return: character
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b;

	while (*(src + a) != '\0')
		a++;
	for (b = 0; b < a; b++)
		dest[b] = src[b];
	dest[a] = '\0';
	return (dest);
}
