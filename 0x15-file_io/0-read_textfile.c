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
	FILE *file;
	char buffer[BUFF_SIZE];
	ssize_t num_read, num_write;

	if (filename == NULL)
	{
		return (0);
	}
	file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}
	num_read = fread(buffer, sizeof(char), letters, file);

	if (num_read <= 0)
	{
		fclose(file);
		return (0);
	}

	buffer[num_read] = '\0';

	num_write = fwrite(buffer, sizeof(char), num_read, stdout);

	fclose(file);

	if (num_write != num_read)
	{
		return (0);
	}
	return (num_read);
}
