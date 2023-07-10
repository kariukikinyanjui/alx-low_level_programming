#include "main.h"

/**
 * create_file - a function that creates a file with the specified
 * name and writes the given text content to it
 * @filename: string representing the name of the file to create
 * @text_content: - string to write to the file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file;
	size_t length;
	size_t num_write;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}

	file = fopen(filename, "w");

	if (file == NULL)
	{
		return (-1);
	}

	length = strlen(text_content);
	num_write = fwrite(text_content, sizeof(char), length, file);

	fclose(file);

	if (num_write != length)
	{
		return (-1);
	}
	if (chmod(filename, S_IRUSR | S_IWUSR) != 0)
	{
		return (-1);
	}

	return (1);
}
