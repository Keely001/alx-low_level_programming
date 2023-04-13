#include "main.h"

unsigned int str_len(char *s);
/**
 * string_nconcat - concatination function
 * @s1: first string
 * @s2: second string
 * @n: size to concat
 * Return: Null or pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, j, i;
	char *c;

	if (s2 == NULL)
		s2 = "";
	else if (s1 == NULL)
		s1 = "";
	a = str_len(s1);
	b = str_len(s2);
	if (n < b)
		c = malloc(sizeof(char) * (a + n + 1));
	else
		c = malloc(sizeof(char) * (a + b + 1));

	if (c == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < a)
	{
		c[i] = s1[i];
		i++;
	}

	while (n < b && i < (a + n))
		c[i++] = s2[j++];

	while (n >= b && i < (a + b))
		c[i++] = s2[j++];

	c[i] = '\0';
	return (c);
}

/**
 * str_len - length of string
 * @s: string
 * Return: string length
 */
unsigned int str_len(char *s)
{
	unsigned int count;

	count = 0;
	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}
