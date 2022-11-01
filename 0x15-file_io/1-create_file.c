#include "main.h"

/**
 * create_file - create a file
 * @filename: string name of file
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, text_len;
	ssize_t w_check;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		return (1);
	}
	text_len = strlen(text_content);
	w_check = write(fd, text_content, text_len);

	if (w_check == -1)
	{
		return (-1);
	}

	close(fd);

	return (1);
}
