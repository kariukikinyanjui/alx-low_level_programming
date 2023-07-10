#include "main.h"

/**
 * print_error_and_exit - takes an error message as an argument
 * and prints it to the stderr
 * @message: pointer to a constant character
 */
void print_error_and_exit(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}
/**
 * display_elf_header - takes filename string as an argument
 * @filename: name of the file
 */
void display_elf_header(const char *filename)
{
	Elf64_Ehdr elf_header;
	ssize_t num_read;
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		print_error_and_exit("Error: Unable to open the file");
	}
	num_read = read(fd, &elf_header, sizeof(Elf64_Ehdr));

	if (num_read != sizeof(Elf64_Ehdr))
	{
		print_error_and_exit("Error: Unable to read the ELF header");
	}
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
		elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
		elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
		elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error_and_exit("Error: Not a valid ELF file");
	}
	printf("Magic: %c%c%c%c\n",
		elf_header.e_ident[EI_MAG1],
		elf_header.e_ident[EI_MAG2],
		elf_header.e_ident[EI_MAG3],
		elf_header.e_ident[EI_MAG0]);
	printf("Class: %s\n", (elf_header.e_ident[EI_CLASS] ==
				ELFCLASS64) ? "ELF64" : "ELF32");
	printf("Data: %s\n", (elf_header.e_ident[EI_DATA] == ELFDATA2MSB)
			? "2's complement, big endian" : "2's complement, little endian");
	printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);
	printf("OS/ABI: %s\n", (elf_header.e_ident[EI_OSABI] ==
				ELFOSABI_SYSV) ? "UNIX System V ABI" : "Other");
	printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);

	printf("Type: %s\n", (elf_header.e_type == ET_EXEC) ? "Executable file" :
		(elf_header.e_type == ET_DYN) ? "Shared object file" :
	(elf_header.e_type == ET_REL) ? "Relocatable file" : "Other");
	printf("Entry point address: 0x%lx\n", elf_header.e_entry);
	close(fd);
}
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	const char *filename;

	if (argc != 2)
	{
		print_error_and_exit("Usage: elf_header elf_filename");
	}
	filename = argv[1];

	display_elf_header(filename);

	return (0);
}
