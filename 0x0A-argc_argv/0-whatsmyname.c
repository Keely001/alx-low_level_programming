#include <stdio.h>
#include "main.h"
/**
 * main - print name of the file
 * @argc: array size
 * @argv: exact array
 * Return: 0 if true
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s", *argv);
	return (0);
}
