#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
#include <string.h>

int check_for_numbers(char *a);
/**
 * main - adds positive numbers
 * @argc: num of arguments
 * @argv: parmeteres
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, num, sum;

	sum = 0;
	i = 1;
	while (i < argc)
	{
		if (check_for_numbers(argv[i]))
		{
			num = atoi(argv[i]);
			sum += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
/**
 * check_for_numbers - check num
 * @a: string
 * Return: 0 or 1
 */
int check_for_numbers(char *a)
{
	unsigned int i = 0;

	while (i < strlen(a))
	{
		if (!isdigit(a[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

