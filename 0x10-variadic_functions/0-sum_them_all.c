#include "variadic_functions.h"
/**
 * sum_them_all - sum no.
 * @n: no. of numbers
 * ...: other parameters
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int sum;

	sum = 0;
	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);
	return (sum);
}
