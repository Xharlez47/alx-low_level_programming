#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fd_i, fd_j, i, j, n;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
	}
	fd_i = open(argv[1], O_RDONLY);
	if (fd_i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
	}
	fd_j = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((i = read(fd_i, buf, BUFSIZ)) > 0)
	{
		if (fd_j < 0 || write(fd_j, buf, i) != i)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				close(fd_i);
				exit(99);
		}
	}
	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
	}
	j = close(fd_i);
	n = close(fd_j);
	if (j < 0 || n < 0)
	{
		if (j < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_i);
		if (n < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_j);
		exit(100);
	}
		return (0);
}
