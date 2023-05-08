#include "main.h"


void close_checker(int elem);
/**
 * close_checker - closess the file and checks if it was successful.
 * @elem: element to me checked
 * Return: nothing.
 */
void close_checker(int elem)
{
	int a;

	a = close(elem);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elem);
		exit(100);
	}
}

/**
 * main - accepts two inputs from the terminal
 * @argc: no. of elements
 * @argv: pointer to an array of the elemets
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *buffer;
	int checker1, checker2, checker3, checker4;
	char *src = argv[1];
	char *dest = argv[2];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		exit(99);
	}
	checker1 = open(src,  O_RDONLY);
	checker2 = read(checker1, buffer, 1024);
	checker3 = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (checker1 == -1 || checker2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
			free(buffer);
			exit(98);
		}
		checker4 = write(checker3, buffer, checker2);
		if (checker3 == -1 || checker4 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			free(buffer);
			exit(99);
		}
		checker2 = read(checker1, buffer, 1024);
		checker3 = open(dest, O_WRONLY | O_APPEND);
	} while (checker2 > 0);
	close_checker(checker1);
	close_checker(checker3);
	return (0);
}

