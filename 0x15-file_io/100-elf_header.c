#include "main.h"
#include <elf.h>

#define BUFFER_SIZE 64

void display_elf_header_info(Elf64_Ehdr *elf_header);

void print_error_exit(const char *message, int exit_code);

int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		print_error_exit("Error opening file", 98);
	}

	if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
	{
		print_error_exit("Error reading ELF header", 98);
	}

	display_elf_header_info(&elf_header);

	close(fd);

	return (0);
}

void display_elf_header_info(Elf64_Ehdr *elf_header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header->e_ident[i]);
	}
	printf("\n");

	printf("  Class:                             %s\n", elf_header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n", elf_header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", elf_header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n", elf_header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
	printf("  ABI Version:                       %d\n", elf_header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", elf_header->e_type == ET_EXEC ? "EXEC (Executable file)" : "Other");
	printf("  Entry point address:               %lx\n", (unsigned long) elf_header->e_entry);
}

void print_error_exit(const char *message, int exit_code)
{
	perror(message);
	exit(exit_code);
}
