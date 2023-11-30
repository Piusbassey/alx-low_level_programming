#include "main.h"
#include <fcntl.h>
/**
 * read_textfile - Reads and prints the content of a file.
 * @filename: The name of the file to read.
 * @letters: The maximum number of bytes to read and print.
 *
 * Return: If successful, returns the total number of bytes.
 *         If an error occurs, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytesRead;
	ssize_t bytesWritten;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	memset(buffer, 0, letters);

	bytesRead = read(fd, buffer, letters);

	close(fd);

	if (bytesRead == -1)
	{
		free(buffer);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	free(buffer);

	if (bytesWritten == -1 || (size_t)bytesWritten != (size_t)bytesRead)
		return (0);

	return (bytesRead);
}
