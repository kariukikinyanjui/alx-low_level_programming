#include "main.h"

/**
 * print_error_and_exit - helper function that prints an error
 * message to the standard error output
 * @message: function parameter 1
 * @exit_code: function parameter 2
 */
void print_error_and_exit(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}
/**
 * copy_file - performs the actual copying of the file content
 * @ffrom: source file
 * @fto: destination file
 * Return: 0
 */
void copy_file(const char *ffrom, const char *fto)
{
	int fd_from, fd_to;
	ssize_t b_read, b_written;
	char buffer[BUFF_SIZE];

	fd_from = open(ffrom, O_RDONLY);

	if (fd_from == -1)
	{
		print_error_and_exit("Error: Can't read from file", 98);
	}
fd_to = open(fto, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
		| S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		print_error_and_exit("Error: Can't write to file", 99);
	}

	while ((b_read = read(fd_from, buffer, BUFF_SIZE)) > 0)
	{
		b_written = write(fd_to, buffer, b_read);

		if (b_written == -1 || b_written != b_read)
		{
			print_error_and_exit("Error: Can't write to file", 99);
		}
	}
	if (b_read == -1)
	{
		print_error_and_exit("Error: Can't read from file", 98);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		print_error_and_exit("Error: Can't close fd", 100);
	}
}
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	const char *ffrom;
	const char *fto;

	if (argc != 3)
	{
		print_error_and_exit("Usage: cp file_from file_to", 97);
	}
	ffrom = argv[1];
	fto = argv[2];

	copy_file(ffrom, fto);

	return (0);
}
