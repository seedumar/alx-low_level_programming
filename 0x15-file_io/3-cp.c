#include "main.h"

/**
 * main - copies content of ! file to another
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	char buf[1024];
	int fd1, fd2, rd, i;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]), exit(98);
	}
	fd2 = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((rd = read(fd1, buf, 1024)) > 0)
	{
		if (fd2 < 0 || (write(fd2, buf, rd) != rd))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]), exit(98);
	}
	i = close(fd1);
	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd1), exit(100);
	}
	i = close(fd2);
	if (1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n",
				fd2), exit(100);
	}
	return (0);
}
