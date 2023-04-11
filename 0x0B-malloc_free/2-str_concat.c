#include "main.h"

int str_length(char *a);
/**
 * str_concat - concatination of strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL or 1
 */
char *str_concat(char *s1, char *s2)
{
	int i, a, b, sum;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = str_length(s1);
	b = str_length(s2);
	sum = (a + b + 1);
	c = malloc(sum * sizeof(char));
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sum; i++)
	{
		if (i < a)
		{
			c[i] = s1[i];
		}
		else
		{
			c[i] = *s2;
			s2++;
		}
	}
	return (c);



}
/**
 * str_length - determinant of length
 * @a: string to det length
 * Return: the number
 */
int str_length(char *a)
{
	int j = 0;

	while (a[j] != '\0')
	{
		j++;
	}
	return (j);
}
