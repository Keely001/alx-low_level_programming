#include "main.h"
int prime_function(int n, int i);
/**
 * is_prime_number - prime numbers function
 * @n: number
 * Return: depending on the number 0 or 1
 */
int is_prime_number(int n)
{
	int i;

	i = 2;
	if (n <= 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime_function(n, i));
}
/**
 * prime_function - prime number determint
 * @n: number
 * @i: no. to check.
 * Return: 0 or 1
 */

int prime_function(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i != 0)
		return (prime_function(n, i + 1));
	if (n % i  == 0)
		return (0);
	return (0);
}
