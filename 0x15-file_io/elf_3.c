#include "elf.h"
/**
 * close_checker - close file
 * fd: file descriptor
 * Return: None.
 */

void close_checker(int fd)
{
	int checker;

	checker = close(fd);
	if (checker == -1)
	{
		dprintf(STDERR_FILENO, "Could not close the file\n");
		exit(98);
	}
}
/**
 * check_file - check if the current file is an elf file
 * @head: pointer to the file details
 * Return: Nothing.
 */

void check_file(Elf64_Ehdr *head)
{
	if (head->e_ident[EI_MAG0] != 127 &&
			head->e_ident[EI_MAG1] != 'E' &&
			head->e_ident[EI_MAG2] != 'L' &&
			head->e_ident[EI_MAG3] != 'F')
	{
		dprintf(STDERR_FILENO,"File:%02x%c%c%c is not an Elf file.\n",head->e_ident[EI_MAG0],
				head->e_ident[EI_MAG1], head->e_ident[EI_MAG2], head->e_ident[EI_MAG3]);
		exit (98);
	}
}

