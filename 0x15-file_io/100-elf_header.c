#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
/**
 * main - A function that displays the information
 * contained in the ELF header at the start of an ELF file
 * @argc: Number of argument
 * @argv: Array pointers of argument
 * Return: 1 success
 */

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Could not open file %s\n", argv[1]);
		return (98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		fprintf(stderr, "Error: Could not read ELF header from file %s\n", argv[1]);
		return (98);
	}
	printf("Magic: %x\n", header.e_ident[EI_MAG2]);
	printf("Clss: %d-bit\n", header.e_ident[EI_CLASS] == ELFCLASS64 ? 64 : 32);

	close(fd);

	return (0);

}
