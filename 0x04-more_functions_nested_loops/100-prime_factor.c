#include <stdio.h>
#include <math.h>

/**
 * main - prime factors
 * Return: Always 0
 */

int main(void)
{
	long a, max, num, sq;

	num = 612852475143;
	sq = sqrt(num);

	for (a = 1; x <= sq; a++)
	{
		if (num % a == 0)
			max = num / a;
	}
	printf("%ld\n", max);
	return (0);
}
