#include "main.h"

/**
 * _isalpha - detechs any alphabet
 * @c: parameter to be checked
 * Return: 1 or 0 depending on the outcome
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
