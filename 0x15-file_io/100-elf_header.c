#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void close_elffile(int fd1);
void close_checker(int fd);
void check_file(Elf64_Ehdr *head);
void magic_printer(Elf64_Ehdr *head);
void class_printer(Elf64_Ehdr *head);
void data_printer(Elf64_Ehdr *head);
void version_printer(Elf64_Ehdr *head);
void osabi_printer(Elf64_Ehdr *head);
void abi_printer(Elf64_Ehdr *head);
void type_printer(unsigned int e_type, unsigned char *e_ident);
void entry_printer(unsigned long int e_entry, unsigned char *e_ident);

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
/**
 * osabi_printer - prints the osabi
 * @head: pointer to the file details
 * Return: None.
 */
void osabi_printer(Elf64_Ehdr *head)
{
	printf("  OS/ABI:                            ");

	switch (head->e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("%x is unknown\n", head->e_ident[EI_OSABI]);
	}
}
/**
 * abi_printer - prints the abi
 * @head: pointer to the file details
 * Return: None.
 */
void abi_printer(Elf64_Ehdr *head)
{
	printf("  ABI Version:                       %d\n", head->e_ident[EI_ABIVERSION]);
}
/**
 * type_printer - prints the type
 * @head: pointer to the file details
 * Return: None.
 */
void type_printer(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * entry_printer - prints the entry.
 * @head: pointer to the file details
 * Return: None.
 */
void entry_printer(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elffile - closes the file
 * @fd: the file descriptor
 * Return: None.
 */
void close_elffile(int fd1)
{
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd1);
		exit(98);
	}
}
/**
 * main - the main function
 * @argc: no of arguments passed
 * @argv: array of the arguments
 * Return: Depending on the success
 */

int main (int __attribute__((unused)) argc, char *argv[])
{
	Elf64_Ehdr *head;
	int fd1, checker_r1;

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO,"File:%s unsuccessfuly opened\n",argv[1]);
		exit(98);
	}
	head = malloc(sizeof(Elf64_Ehdr));
	if (head == NULL)
	{
		dprintf(STDERR_FILENO, "unsuccessfull memery allocation detected for file %s\n", argv[1]);
		close_checker(fd1);
		exit(98);
	}

	checker_r1 = read(fd1, head, sizeof(Elf64_Ehdr));
	if (checker_r1 == -1)
	{
		dprintf(STDERR_FILENO, "unsuccessfull read operation for file %s\n", argv[1]);
		close_checker(fd1);
		exit(98);
	}
	check_file(head);
	printf("ELF Header:\n");
	magic_printer(head);
	class_printer(head);
	data_printer(head);
	version_printer(head);
	osabi_printer(head);
	abi_printer(head);
	type_printer(head->e_type, head->e_ident);
	entry_printer(head->e_entry, head->e_ident);
	free(head);
	close_elffile(fd1);
	return (0);
}
