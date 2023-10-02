#include "main.h"

/**
 * read_textfile- reads text file then prints to stdout
 *
 * @filename: text file being read
 * @letter: number of letters to be read
 *
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, w, t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
