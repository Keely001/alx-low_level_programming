#include "main.h"
/**
 * _strchr - identify a string
 * @s: string
 * @c: character
 * Return: string with the character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}
	return (0);
}
