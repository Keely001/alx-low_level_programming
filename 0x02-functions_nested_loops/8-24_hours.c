#include "main.h"
/**
 * jack_bauer - prints the clock
 *
 * Return: Always void
 */
void jack_bauer(void)
{
	int minutes;
	int hours;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar(hours / 10 + '0');
			_putchar(hours % 10 + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(minutes % 10 + '0');
			_putchar('\n');
		}
	}
}
