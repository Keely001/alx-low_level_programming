#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print specific letters
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for(c = 'a'; c <= 'z'; c++)
	{
		if(c != 'q' || c != 'e')
		putchar(c);
	}
	putchar('\n');
	return (0);
}
