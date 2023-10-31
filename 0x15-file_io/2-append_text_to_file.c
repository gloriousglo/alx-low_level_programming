#include "main.h"

/**
 * append_text_to_file - function to append to a file at the end
 * @filename: the name of the file
 * @text_content: A NULL terminated string
 *
 * Return: return 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n = 0;
	ssize_t wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[n] != '\0')
			n++;

		wr = write(fd, text_content, n);
		if (wr == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
