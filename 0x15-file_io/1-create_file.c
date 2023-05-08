#include "main.h"

/**
 * create_file - create or tracuates a file
 * @filename: points to a file.
 * @text_content: pointer to the content to be used
 * Return: -1 or 1.
 */

int create_file(const char *filename, char *text_content)
{
	int length = 0;
	int checker = 0;
	int w = 0;
	const char *text_ptr = text_content;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (*text_ptr)
		{
			length++;
			text_ptr++;
		}
	}
	checker = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(checker, text_content, length);
	if (w == -1 || checker == -1)
	{
		close(checker);
		return (-1);
	}
	close(checker);

	return (1);
}
