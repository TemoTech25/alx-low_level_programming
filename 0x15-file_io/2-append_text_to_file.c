#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: a NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 * If the file can not be opened or written to, return -1.
 * If filename is NULL return -1.
 * If text_content is NULL, do not add anything to the file. Return 1 if the file exists and -1 if the file does not exist or if you do not have the required permissions to write the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
  int fd;
  ssize_t bytes_written;

  /* Check if filename is NULL */
  if (filename == NULL)
  {
      return -1;
  }

  /* Open the file with append permissions */
  fd = open(filename, O_WRONLY | O_APPEND);
  if (fd == -1)
  {
      return -1;
  }

  /* Write the text content to the file */
  if (text_content != NULL)
  {
      bytes_written = write(fd, text_content, strlen(text_content));
      if (bytes_written == -1)
      {
          close(fd);
          return -1;
      }
  }

  /* Close the file */
  close(fd);

  /* Return success */
  return 1;
}

