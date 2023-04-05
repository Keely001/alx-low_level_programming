#include "main.h"
/**
 * _print_rev_recursion - reverse string
 * @s: string pointer
 * Return: none
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	_putchar('\0');
}
