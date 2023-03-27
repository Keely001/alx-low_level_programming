#include "main.h"

/**
 * puts_half - prints hald the string.
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int i = 0;
	int a;

	while (*str != '\0')
		i++;
	a = (i / 2);
	if ((i % 2) == 1)
		a = ((i + 1) / 2);
	for (j = a; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}
