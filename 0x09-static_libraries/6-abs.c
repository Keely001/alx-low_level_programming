#include "main.h"

/**
 * _abs - give the abs value
 *
 * @a: parameter
 *
 * Return: the number
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else
		a = a;
	return (a);
}
