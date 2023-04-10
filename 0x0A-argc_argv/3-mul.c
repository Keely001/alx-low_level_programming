#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiple of 2 numbers.
 * @argc: no. of aurguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	return (0);
}
