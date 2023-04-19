#include "3-calc.h"
/**
 * get_op_func - determines the operation
 * @s: pointer to the sign
 * Return: pointer to the operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (*(ops[i].op) != *s && ops[i].op != NULL)
		i++;
	return (ops[i].f);
}
