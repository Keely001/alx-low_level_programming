#include "main.h"
/**
 * read_textfile - reads a file, and puts in a buffer and reproductions
 * @filename: pointer to the file.
 * @letters: no. of letters required
 * Return: 0 or size of letters in buffer.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t size, checker;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(size_t) * (letters + 1));
	if (buff == NULL)
		return (0);
	checker = open(filename, O_RDONLY);
	if (checker == -1)
	{
		free(buff);
		return (0);
	}
	size = read(checker, buff, letters);
	if (size == -1)
	{
		free(buff);
		close(checker);
		return (0);
	}
	buff[size] = '\0';
	write(STDOUT_FILENO, buff, size);
	free(buff);
	close(checker);
	return (size);
}

