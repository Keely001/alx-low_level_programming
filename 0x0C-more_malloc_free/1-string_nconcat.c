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
	unsigned int a, b, j, i, sum;
	char *c;

	if (s2 == NULL)
		s2 = "";
	else if (s1 == NULL)
		s1 = "";
	a = str_len(s1);
	b = str_len(s2);
	if (n >= b)
		b = b;
	else
		b = n;
	sum = a + b + 1;
	c = malloc(sizeof(char) * sum);
	if (c == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < sum; i++)
	{
		if (i < a)
			c[i] = s1[i];
		else if (i < sum - 1)
		{
			c[i] = s2[j];
			j++;
		}
		else
			c[i] = '\0';
	}
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

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
