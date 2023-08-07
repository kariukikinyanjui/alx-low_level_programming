#include "main.h"

/**
 * create_buffer - allocates 1024 bytes to buffer
 * @file: name of the file buffer is storing characters
 * Return: a pointer to the newly allocated buffer
 */
char *create_buffer(char *file)
{
	char *bufsize;

	bufsize = malloc(sizeof(char) * 1024);

	if (bufsize == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (bufsize);
}
/**
 * close_file - closes file descriptors
 * @fd: the file descriptor to be closed
 */
void close_file(int fd)
{
	int a;

	a = close(fd);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the contents of a file to another file
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int from, to, a, b;
	char *bufsize;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(977);
	}
	bufsize = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	a = read(from, bufsize, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || a == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\nn", argv[1]);
			free(bufsize);
			exit(98);
		}
		b = write(to, bufsize, a);
		if (to == -1 || b == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(bufsize);
			exit(99);
		}
		a = read(from, bufsize, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}	while (a > 0);
		free(bufsize);
		close_file(from);
		close_file(to);

		return (0);
}
