#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int j = 0;
	char z = s[0];

	while (s[j] != '\0')
		j++;
	for (i = 0; i < j; i++)
	{
		j--;
		z = s[i];
		s{i} = s[j];
		s[j] = z;
	}
}
