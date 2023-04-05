#include "main.h"
int _length (char *s);
int palindrome(char *s, int i, int length);
/**
 * is_palindrome - main function
 * @s: the string
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palindrome(s, 0, _length(s)));
}
/**
 * _length - calculate the length
 * @s: the string
 * Return: Return the string length
 */

int _length (char *s)
{
	if (*s == '\0')
		return (0);
	return(1 + _length(s + 1));
}

/**
 * palindrome - determine the palindrome
 * @s: string
 * @i: position
 * @length: length
 * Return: 0 or 1
 */

int palindrome(char *s, int i, int length)
{
	if (*(s + i) != *(s + (length - 1)))
	       return (0);
	if (i >= length)
		return (1);
	return(palindrome(s, i + 1, length -1));
	return (0);
}
