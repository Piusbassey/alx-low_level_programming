#include "main.h"

#define BUFFER_SIZE 1024

/**
 * copy_file - Copy the content of one file to another.
 * @from: The source file descriptor.
 * @to: The destination file descriptor.
 */
void copy_file(int from, int to)
{
	char buffer[BUFFER_SIZE];
	ssize_t rd, wr;

	do {
		rd = read(from, buffer, BUFFER_SIZE);
		if (rd == -1)
		{
			perror("read");
			exit(98);
		}

		wr = write(to, buffer, rd);
		if (wr == -1)
		{
			perror("write");
			exit(99);
		}
	} while (rd == BUFFER_SIZE);
}

/**
 * close_fd - Close a file descriptor.
 * @fd: The file descriptor to close.
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		perror("close");
		exit(100);
	}
}

/**
 * main - Copy the content of a file to another file.
 * @ac: The number of command line arguments.
 * @av: An array of strings representing the command line arguments.
 *
 * Return: 0 on success, or the appropriate exit code on failure.
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		close_fd(fd_from);
		exit(99);
	}

	copy_file(fd_from, fd_to);

	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
