#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print numbers
 * Return: Always return 0
 */
int main(void)
{
	int a, b, c;

	for (a = '0'; a < '9'; a++)
	{
	for (b = '0'; b < '9'; b++)
	{
	for (c = '0'; c < '9'; c++)
	{
		if ((b != a) != c)
		{
		putchar(a);
		putchar(b);
		putchar(c);
		if (a == '7' && c == '8')
		continue;
		putchar(',');
		putchar(' ');
		}
	}
	}
	}
	putchar('\n');
	return (0);
}
