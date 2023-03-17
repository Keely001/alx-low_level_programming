#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 *
 * main - Determine the positive numbers, negative numbers and zero.
 *
 *Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("is negative");
	};
	else if (n == 0)
	{
		printf("is zero");
	}
	else
	{
		printf("is positive");
	}
}
