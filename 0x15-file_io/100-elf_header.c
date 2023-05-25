#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void print_abi(unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void close_elf(int file);
void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);

/**
 * check_elf - Checks Elf
 * @e_ident: array pntr
 *
 * Description: exit code 98.
 */

void check_elf(unsigned char *e_ident)
{
	int idx;

	for (idx = 0; idx < 4; idx++)
	{
		if (e_ident[idx] != 127 &&
			e_ident[idx] != 'E' &&
			e_ident[idx] != 'L' &&
			e_ident[idx] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - prnt magic number
 * @e_ident: pntr to array
 *
 * Description: separated.
 */

void print_magic(unsigned char *e_ident)
{
	int idx;

	printf("  Magic:   ");

	for (idx = 0; idx < EI_NIDENT; idx++)
	{
		printf("%02x", e_ident[idx]);

		if (idx == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - header class prnt
 * @e_ident: array pntr
 */

void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

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
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - data prnt
 * @e_ident: pntr
 */

void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
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
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_version - version.
 * @e_ident: pntr
 */

void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
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
 * print_osabi - OS/ABI.
 * @e_ident: pntr
 */

void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
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
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_abi - ABI version
 * @e_ident: pntr
 */

void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
		   e_ident[EI_ABIVERSION]);
}

/**
 * print_type - type of
 * @type: ELF type
 * @e_ident: pntr
 */

void print_type(unsigned int type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		type >>= 8;

	printf("  Type:                              ");

	switch (type)
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
		printf("<unknown: %x>\n", type);
	}
}

/**
 * print_entry - entry prnt
 * @entry: address
 * @e_ident: pntr
 */

void print_entry(unsigned long int entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) |
				((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);
	else
		printf("%#lx\n", entry);
}

/**
 * close_elf - Closes
 * @file: describe
 *
 * Description: exit code 98 for unclosed
 */

void close_elf(int file)
{
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", file);
		exit(98);
	}
}

/**
 * main - info display
 * @arg_count: arg count
 * @arguments: arg vector
 *
 * Return: 0 for success.
 */

int main(int __attribute__((__unused__)) arg_count, char *arguments[])
{
	Elf64_Ehdr *hdr;
	int fd, result;

	fd = open(arguments[1], O_RDONLY);
	if (fd == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read file %s\n", arguments[1]);
	exit(98);
	}

	hdr = malloc(sizeof(Elf64_Ehdr));
	if (hdr == NULL)
	{
		close_elf(fd);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", arguments[1]);
        	exit(98);
	}

	result = read(fd, hdr, sizeof(Elf64_Ehdr));
	if (result == -1)
	{
                free(hdr);
                close_elf(fd);
                dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", arguments[1]);
                exit(98);
	}

check_elf(hdr->e_ident);
	printf("ELF Header:\n");
	print_magic(hdr->e_ident);
	print_class(hdr->e_ident);
	print_data(hdr->e_ident);
	print_version(hdr->e_ident);
	print_osabi(hdr->e_ident);
	print_abi(hdr->e_ident);
	print_type(hdr->e_type, hdr->e_ident);
	print_entry(hdr->e_entry, hdr->e_ident);

	free(hdr);
	close_elf(fd);
	return (0);

}
