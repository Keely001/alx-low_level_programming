#include "main.h"
void close_checker(int elem);
/**
 * close_checker - closes the file and checks if it was successful.
 * @elem: element to me checked.
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
 * main - accepts two inputs from the terminal.
 * @argc: no. of elements.
 * @argv: pointer to an array of the elements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *buff;
	char *src = argv[1];
	char *dest = argv[2];
	int checker1, checker2, checker3, checker4;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		exit(99);
	}
	checker1 = open(src, O_RDONLY);
	checker2 = read(checker1, buff, 1024);
	checker3 = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (checker1 == -1 || checker2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
			free(buff);
			exit(98);
		}
		checker4 = write(checker3, buff, checker2);
		if (checker3 == -1 || checker4 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			free(buff);
			exit(99);
		}
		checker2 = read(checker1, buff, 1024);
		checker3 = open(dest, O_WRONLY | O_APPEND);
	} while (checker2 > 0);
	close_checker(checker1);
	close_checker(checker3);
	return (0);
}
