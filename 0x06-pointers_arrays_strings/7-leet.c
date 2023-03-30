#include "main.h"
/**
 * leet - encodes a message
 * @a: message
 * Return: coded message
 */
char *leet(char *a)
{
	int i;
	int j;

	char string1[] = "aAeEoOtTlL";
	char string2[] = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; string1[j] != '\0'; i++)
		{
			if (a[i] == string1[j])
			{
				a[i] = string2[j];
			}
		}
	}
	return (a);
}
