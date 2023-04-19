#include "3-calc.h"


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - add no.
 * @a: parameter 1
 * @b: parameter 2
 * Return: sum
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}
/**
 * op_sub - add no.
 * @a: parameter 1
 * @b: parameter 2
 * Return: sub
 */
int op_sub(int a, int b)
{
	int sub;

	sub = a - b;
	return (sub);
}
/**
 * op_mul - add no.
 * @a: parameter 1
 * @b: parameter 2
 * Return: mul
 */
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}
/**
 * op_div - add no.
 * @a: parameter 1
 * @b: parameter 2
 * Return: div
 */
int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}
/**
 * op_mod - add no.
 * @a: parameter 1
 * @b: parameter 2
 * Return: mod
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
