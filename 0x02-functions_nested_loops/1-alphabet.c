#include "main.h"

/**
 * print_alphabet - prints alph plus new  line.
 * Return: Always 0
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
