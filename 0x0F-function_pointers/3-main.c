#include "3-calc.h"

/**
 * main - return a math operation
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: the results
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char *sign;
	int num1;
	int num2;

	sign = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((num2 == 0 && *sign == '/') ||
			(num2 == 0 && *sign == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	if (get_op_func(sign) == NULL || sign[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(sign)(num1, num2));

	return (0);
}
