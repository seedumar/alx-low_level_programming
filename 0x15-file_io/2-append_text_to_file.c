#include "main.h"

/**
 * append_text_to_file - Appends text to a file
 * @filename: name of file
 * @text_content: text to append
 *
 * Return: -1 if error and 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int w, i = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[i])
			i++;
		w = write(fd, text_content, i);
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
