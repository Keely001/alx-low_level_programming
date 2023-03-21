#include "main.h"

/**
 * main - Entry point of the program
 * prints alph plus new  line.
 * Return: Always 0
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
