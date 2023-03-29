#include "main.h"
/**
 * _strcat - concatenate strings
 * @dest: fst string
 * @src: scd string
 * Return: The string
 */
char *_strcat(char *dest, char *src)
{
	int count, count2, totalL;
	int i;

	count = 0;
	count2 = 0;
	totalL = 0;

	while (*dest != '\0')
	{
		count++;
		dest++;
	}
	while (*src != '\0')
	{
		count2++;
		src++;
	}
	totalL = count + count2;
	for (i = 0; i <= totalL; i++)
	{
		if (i >= 0 && i < count)
			*(dest + i) = *(dest + i);
		else
		{
			while (*src != '\0')
			{
				*(dest + i) = *src;
				src++;
			}
			*(dest + i) = '\0';
		}
	}
	return (dest);
}
