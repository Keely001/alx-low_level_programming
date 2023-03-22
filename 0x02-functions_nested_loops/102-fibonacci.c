#include <stdio.h>
/**
 * main - Entry point for fib
 * Return: Always 0
 */
int main(void)
{
	int a;
	int b;
	int nextNum;
	int i;

	a = 1;
	b = 2;

	for (i = 0; i < 50; i++)
	{
		if (i == 0)
		printf(a + ", ");
		else if (i ==  1)
		printf(b + ", ");
		else
		{
		nextNum = a + b;
		printf(nextNum + ", ");
		a = b;
		b = nextNum;
		}
	}
	return (0);
}


