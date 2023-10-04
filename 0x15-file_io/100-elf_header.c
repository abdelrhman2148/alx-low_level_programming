#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define BUF_SIZE 64

/**
 * print_elf_header_info - Print information from the ELF header.
 *
 * @elf_header: Pointer to the ELF header structure.
*/
void print_elf_header_info(const Elf64_Ehdr *elf_header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n",
			elf_header->e_ident[EI_CLASS] == ELFCLASS64
			? "ELF64" : "ELF32");
	printf("  Data:                              %s\n",
			elf_header->e_ident[EI_DATA] == ELFDATA2LSB
			? "2's complement, little endian"
			: "Unknown data format");
	printf("  Version:                           %d (current)\n",
			elf_header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n",
			elf_header->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n",
			elf_header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              0x%x\n",
			elf_header->e_type);
	printf("  Entry point address:               0x%lx\n",
			(unsigned long)elf_header->e_entry);
}
/**
 * main - Entry point of the program.
 *
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: 0 on success, 98 on error.
*/
int main(int argc, char *argv[])
{
	const char *elf_filename;
	int fd;
	Elf64_Ehdr elf_header;
	ssize_t bytes_read;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}
	elf_filename = argv[1];
	fd = open(elf_filename, O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (98);
	}
	bytes_read = read(fd, &elf_header, sizeof(Elf64_Ehdr));
	if (bytes_read == -1)
	{
		perror("Error reading file");
		close(fd);
		return (98);
	}
	if (bytes_read != sizeof(Elf64_Ehdr) || elf_header.e_ident[EI_MAG0]
			!= ELFMAG0 || elf_header.e_ident[EI_MAG1] != ELFMAG1
			|| elf_header.e_ident[EI_MAG2] != ELFMAG2
			|| elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		close(fd);
		return (98);
	}
	printf("ELF Header:\n");
	print_elf_header_info(&elf_header);
	close(fd);
	return (0);
}
