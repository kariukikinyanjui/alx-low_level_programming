#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: name of textfile to read
 * @letters: number of letters to read and print
 * Return: actual number of letters it could read and print, 0 if file
 * cannot be opened, filename is NULL, if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufsize;
	ssize_t f, fd, w;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	bufsize = malloc(sizeof(char) * letters);
	f = read(fd, bufsize, letters);
	w = write(STDOUT_FILENO, bufsize, f);

	free(bufsize);
	close(fd);
	return (w);
}
