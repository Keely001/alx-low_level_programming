#include "main.h"
/**
 * append_text_to_file - appending text
 * @filename: points to the file
 * @text_content: pointer to the text to be appended
 * Return: -1 or 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int leng = 0, fd = 0, w = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[leng])
			leng++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, leng);
	if (w == -1 || fd == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

