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
	int checker;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (*text_content)
		{
			length++;
			text_content++;
		}
	}
	checker = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if ((write(checker, text_content, length)) == -1 || checker == -1)
		return (-1);
	close(checker);

	return (1);
}
