#include "main.h"

/**
 * read_textfile - Reads a text file and
 * writes to standard output (POSIX)
 * @filename: pointer to filename
 * @letters: number of leeters to read
 *
 * Return: 0 (Fail) or number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read = 0;
	int fd;
	char *buf = malloc(sizeof(char) * letters);

	if (filename == NULL || !buf)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
		return (0);
	bytes_read = write(STDOUT_FILENO, buf, bytes_read);
	free(buf);
	if (bytes_read == -1)
		return (0);
	close(fd);
	return (bytes_read);
}
