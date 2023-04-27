#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void _elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);

/**
 * _elf - checks if a given file is an elf file
 * @e_ident: pointer to a fixed size array
 */

void _elf(unsigned char *e_ident)
{
	int i;
	
	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 && e_ident[i] != 'E' &&
				e_ident[i] != 'L' &&
				e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/** print_magic - prints magic numbers of elf file
 * @e_ident: pointer to a fixed size array
 */

void print_magic(unsigned char *e_ident)
{
	int i;
	
	printf("   Magic:   ");
	for (i = 0; ix < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
	}
	printf("\n");
}

/**
 * print_class - prints the class of elf header file
 * @e_ident: a pointer to a fixed size array
 */

void print_class(unsigned char *e_ident)
{

