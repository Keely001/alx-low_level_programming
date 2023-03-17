#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Printing char
 * Return: Always 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	putchar(c);
	putchar('\n');

	return (0);
}
