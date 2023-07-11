#include "main.h"

/**
 * appen_text_to_file - a function that appends text at the
 * end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success -1 on failure
 */
int appent_text_to_file(const char *filename, char *text_content)
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
		return (access(filename, F_OK) == 0 ? 1 : -1);
	}
	file = fopen(filename, "a");

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
	return (1);
}
