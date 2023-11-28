#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
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
  ssize_t bytes_read, bytes_written;
  char buffer[1024];
  int fd;

  /* Check if filename is NULL */
  if (filename == NULL)
  {
      return 0;
  }

  /* Open the file */
  fd = open(filename, O_RDONLY);
  if (fd == -1)
  {
      return 0;
  }

  /* Read the file */
  bytes_read = read(fd, buffer, letters);
  if (bytes_read == -1)
  {
      close(fd);
      return 0;
  }

  /* Write the data to the standard output */
  bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
  if (bytes_written == -1)
  {
      close(fd);
      return 0;
  }

  /* Close the file */
  close(fd);

  /* Return the number of bytes read */
  return bytes_read;
}

