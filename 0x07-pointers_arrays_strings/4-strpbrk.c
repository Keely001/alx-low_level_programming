#include "main.h"
/**
 * _strpbrk - print the characters
 * @s: parameter 1
 * @accept: parameter 2
 * Return: string with out the prefixes
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++;)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}
