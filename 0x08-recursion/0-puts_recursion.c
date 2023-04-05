#include "main.h"
/**
 * _puts_recursion - recursion to print
 * @s: pointer to a string
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\0');
		_putchar('\n');
	}
}
