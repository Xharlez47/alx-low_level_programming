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
	unsigned int i;
	unsigned int fd;

	if (!filename)
		return (0);
	fd = open(*filename, O_RDONLY);
	if (fd == -1)
		exit(1);
	read(fd, buf, letters[i]);
	buf(letters - 1) = "\0";
	close(fd);
}
