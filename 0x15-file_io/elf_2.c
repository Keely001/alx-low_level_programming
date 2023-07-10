#include "elf.h"

/**
 * magic_printer - prints the magic
 * @head: pointer to the file details
 * Return: None.
 */

void magic_printer(Elf64_Ehdr *head)
{
	int i = 0;

	printf("  Magic:   ");
	while (i < EI_NIDENT)
	{
		printf("%02x",head->e_ident[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
		i++;
	}
}

/**
 * class_printer - prints the class
 * @head: pointer to the file details
 * Return: None.
 */
void class_printer(Elf64_Ehdr *head)
{
	printf("  Class:                             ");

	switch (head->e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("%x is unknown\n", head->e_ident[EI_CLASS]);
	}
}

/**
 * data_printer - print the data type
 * @head: pointer to the file details
 * Return: None.
 */
void data_printer(Elf64_Ehdr *head)
{
	printf("  Data:                              ");
	switch (head->e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("%x is unknown\n", head->e_ident[EI_CLASS]);
	}
}

/**
 * version_printer - prits the version.
 * @head: pointer to the file details
 * Return: None.
 */
void version_printer(Elf64_Ehdr *head)
{
	printf("  Version:                           %d",head->e_ident[EI_VERSION]);
	if (head->e_ident[EI_VERSION] == EV_CURRENT)
	{
		printf(" (current)\n");
	}
	else
	{
		printf("\n");
	}
}

