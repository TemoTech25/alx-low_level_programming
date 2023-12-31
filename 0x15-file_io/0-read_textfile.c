#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: the name of the file to read.
 * @letters: the number of letters to read and print.
 *
 * Return: the actual number of letters it could read and print.
 * If the file can not be opened or read, return 0.
 * If filename is NULL return 0.
 * If write fails or does not write the expected amount of bytes, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filename_d;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	filename_d = open(filename, O_RDONLY);

	if (filename_d == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(filename_d, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(filename_d);

	free(buf);

	return (nwr);
}
