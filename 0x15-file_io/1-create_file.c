#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - creates a file and writes text content to it.
 * @filename: the name of the file to create.
 * @text_content: a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 * If the file can not be created or written to, return -1.
 * If filename is NULL return -1.
 * If text_content is NULL create an empty file.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}


	close(fd);

	return (1);
}

