#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * cp - copies the content of a file to another file.
 * @file_from: the name of the source file.
 * @file_to: the name of the destination file.
 *
 * Return: 0 on success and -1 on failure.
 * If the number of arguments is not correct, exit with code 97.
 * If file_from does not exist or cannot be read, exit with code 98.
 * If file_to cannot be created or written to, exit with code 99.
 * If a file descriptor cannot be closed, exit with code 100.
 */
int main(int ac, char **av)
{
 int fd_from, fd_to;
 char buffer[BUFFER_SIZE];
 ssize_t bytes_read, bytes_written;

 /* Check the number of arguments */
 if (ac != 3)
 {
     dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
     exit(97);
 }

 /* Open the source file */
 fd_from = open(av[1], O_RDONLY);
 if (fd_from == -1)
 {
     dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
     exit(98);
 }

 /* Open the destination file with write permissions, creating it if it doesn't exist */
 fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
 if (fd_to == -1)
 {
     dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
     close(fd_from);
     exit(99);
 }

 /* Read from the source file and write to the destination file */
 while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
 {
     bytes_written = write(fd_to, buffer, bytes_read);
     if (bytes_written == -1)
     {
         dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
         close(fd_from);
         close(fd_to);
         exit(99);
     }
 }

 /* Check for read error */
 if (bytes_read == -1)
 {
     dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
     close(fd_from);
     close(fd_to);
     exit(98);
 }

 /* Close the file descriptors */
 if (close(fd_from) == -1 || close(fd_to) == -1)
 {
     dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
     dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
     exit(100);
 }

 /* Return success */
 return 0;
}

