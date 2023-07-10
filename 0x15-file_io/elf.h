#ifndef ELF_H
#define ELF_H

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

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


#endif
