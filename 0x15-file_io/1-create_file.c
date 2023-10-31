#include "main.h"

/**
 * create_file - function to create a new file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: return 0 for success and -1 for failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, no_string = 0;
	ssize_t wr;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[no_string] != '\0')
			no_string++;
		wr = write(fd, text_content, no_string);
		if (wr == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
