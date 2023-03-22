#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int i, j;
	int curValue;

	for (i = 0; i <= 0; i++)
	{
		for (j = 0;j <= 9;j++)
		{
			curValue = i*j;
			if ( curValue >= 9)
			{
				_putchar(curValue = '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(curValue + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		_putchar('\n');
