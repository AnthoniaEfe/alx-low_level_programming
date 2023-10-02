#include "main.h"

/**
 * read_textfile - reads text file and prints to stdout
 *
 * @filename: pointer to the name of the file
 * @letters: number of letters the to be read
 *
 * Return: number of letter s it could read and print
 *	if failure, 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, o, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);
	return (w);
}
