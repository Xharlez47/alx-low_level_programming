#include "main.h"

/**
 * read_textfile - hat reads a text file and prints it to the POSIX
 * standard output
 * @filename: string
 * @letters: characters
 * Return: 0 if filename is NULL or if write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i, j, fd;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		exit(1);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	i = read(fd, buf, letters);
		if (i < 0)
	{
		free(buf);
		return (0);
	}
	buf[i] = '\0';
		close(fd);
	j = write(STDOUT_FILENO, buf, i);
	if (j < 0)
	{
		free(buf);
		return (0);
	}
		free(buf);
		return (j);
}
