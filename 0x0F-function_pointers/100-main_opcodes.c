#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints opcode
 * @argc: no. of arguments
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int size;
	int i;
	char *ar;

	size = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (size <= -1)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;

	for (i = 0; i < size - 1; i++)
		printf("%02hhx ", ar[i]);
	printf("%02hhx\n", ar[i]);
	return (0);
}
