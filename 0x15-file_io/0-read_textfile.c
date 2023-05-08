#include "main.h"

/**
 * read_textfile - reads a file, puts in in a buffer and prints
 * @filename: pointer to the file
 * @letters: no. of letters required
 * Return: 0 or size of letters in buffer
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t size;
	char *buffer;
	ssize_t checker;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(size_t) * (letters + 1));
	if (buffer == NULL)
		return (0);
	checker = open(filename, O_RDONLY);
	if (checker == -1)
	{
		free(buffer);
		return (0);
	}
	size = read(checker, buffer, letters);
	if (size == -1)
	{
		free(buffer);
		close(checker);
		return (0);
	}
	buffer[size] = '\0';
	write(STDOUT_FILENO, buffer, size);
	free(buffer);
	close(checker);
	return (size);
}
