#include "main.h"

/**
 * puts2 - prints characters
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	int a;
	char *b = str;

	while (*b != '\0')
	{
		b++;
		i++;
	}
	for (a = 0; a < i; a++)
	{
		if (a % 2 == 0)
			_putchar(str[a]);
	}
	_putchar('\n');
}
