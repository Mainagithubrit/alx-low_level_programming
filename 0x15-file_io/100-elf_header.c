#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void elf(unsigned char *e_ident);
void magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void data(unsigned char *e_ident);
void version(unsigned char *e_ident);
void ab(unsigned char *e_ident);
void osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * elf - checks a file if its an Elf file
 * @e_ident: pointer to array containing Elf magic numbers
 */

void elf(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 && e_ident[i] != 'E' &&
				e_ident[i] != 'L' && e_ident[i] != 'F')
		{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
		}
	}
}

/**
 * magic - a function that prints magic numbers of an ELF header
 * @e_ident:  pointer to array containing Elf magic numbers
 */

void magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:  ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - prints class of an ELF header
 * @e_ident:  pointer to array containing Elf class
 */

void print_class(unsigned char *e_ident)
{
	printf(" Class: ");

	switch (e_ident[EI_CLASS])
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
		printf("<unkown: %x>\n", e_ident[EI_CLASS]);
	}

}

/**
 * data - prints the data of an ElF
 * @e_ident:  pointer to array containing Elf class
 */

void data(unsigned char *e_ident)
{
	printf(" Data: ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's Complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's compliment, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * version - prints the version of ELF header
 * @e_ident:  pointer to array containing Elf version
 */

void version(unsigned char *e_ident)
{
	printf(" Version: %d",
			e_ident[EI_VERSION]);
	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * osabi - prints OS/BI of an ELF header
 * @e_ident: pointer to an array containing ELF
 */

void osabi(unsigned char *e_ident)
{
	printf(" OS/ABI: ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System  V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - freeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARN\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone APP\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * ab - prints ABI version of an ELF header
 * @e_ident:  pointer to array containing Elf ABI version
 */

void ab(unsigned char *e_ident)
{
	printf(" ABI Version: %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints the type of an ELF header
 * @e_type: Type of ELF
 * @e_ident:  pointer to array containing Elf class
 */

void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf(" Type: ");

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
		printf("CORE (core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry - prints the entry point of an ELF
 * @e_ident:  pointer to array containing Elf class
 * @e_entry: the address of ELF entry point
 */

void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" Entry point address: ");

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
 * close_elf - close an ELF file
 * @elf: The file decriptor of the ElF file
 */

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't cloe fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays information in the ELF header at the start of an ELF file
 * @argc: number of arguments
 * @argv: an array of pointers to the arguments
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *head;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant't read file %s\n", argv[1]);
		exit(98);
	}
	head = malloc(sizeof(Elf64_Ehdr));
	if (head == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, head, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(head);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: '%s' : NO such file\n", argv[1]);
		exit(98);
	}

elf(head->e_ident);
printf("ELF Header:\n");
magic(head->e_ident);
print_class(head->e_ident);
data(head->e_ident);
version(head->e_ident);
osabi(head->e_ident);
ab(head->e_ident);
print_type(head->e_type, head->e_ident);
print_entry(head->e_entry, head->e_ident);

free(head);
close_elf(o);
return (0);
}
