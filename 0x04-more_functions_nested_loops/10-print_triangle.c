#include "main.h"

/**
 * print_triangle - prints the triangle.
 * @size: parameter for size
 * Return: non
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
	for (i = size; i > 0; i--)
	{
		for (j = 1; j <= size; j++)
		{
			if (j >= i)
				_putchar(35);
			else
				_putchar(32);
		}
		_putchar('\n');
	}
	}
}
