#include "main.h"
/**
 * _strspn - method
 * @s: parameter 1
 * @accept: parameter 2
 * Return: number bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i,j ;
	unsigned int k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (k);
		}

	}
	return (k);
}
