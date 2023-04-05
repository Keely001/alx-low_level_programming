#include "main.h"
int main_recursion(int n, int i);
/**
 * _sqrt_recursion - introduction of i
 * @n: number
 * Return: sqrt of the n
 */

int _sqrt_recursion(int n)
{
	int i;

	i = 0;
	if (n < 0)
		return (-1);
	return (main_recursion(n, i));
}
/**
 * main_recursion - recursion function
 * @n: number
 * @i: facilitate recursion
 * Return: sqrt
 */

int main_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	else
		return (main_recursion(n, (i + 1)));
}
