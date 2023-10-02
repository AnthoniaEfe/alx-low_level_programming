#include "main.h"

/**
 * create_file- creates a file
 *
 * @filename: pointer to the name of the file to create
 * @text_content: pointer to a string to write to the file
 *
 * Return: 1 if success, -1 if failure
 */

int create_file (const char *filename, char *text_content)
{
	int w, fd, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, length);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
