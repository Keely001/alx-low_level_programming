#include <stdio.h>
#include "main.h"
/**
 * main - prints the arguments
 * @argc: no of arguments
 * @argv: array
 * Return: 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
