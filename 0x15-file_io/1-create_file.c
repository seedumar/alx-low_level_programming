#include "main.h"

/**
 * create_file - createsva file
 * @filename: file name
 * @text_content: content of file
 *
 * Return: 1 on Success and -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, j;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (fd);
	for (i = 0 ; text_content[i] != '\0' ; i++)
		;
	j = write(fd, text_content, i);
	if (j == -1)
		return (j);
	close(fd);
	return (1);
}
