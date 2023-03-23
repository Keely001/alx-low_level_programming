#include "main.h"
/**
 * _isdigit - checks for digits
 * @c: parameter to be checked
 * Return: 1 or 0 depending on output
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
