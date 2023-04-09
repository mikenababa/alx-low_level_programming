#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/* Declare function prototypes */
char *create_buffer(char *file);
void close_file(int fd);
/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
/* Allocate memory for buffer */
char *file_buffer;
file_buffer = malloc(sizeof(char) * 1024);
/* Check if allocation was successful */
if (file_buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}
return (file_buffer);
}
/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
/* Close file descriptor */
int close_ret;
close_ret = close(fd);
/* Check if file descriptor was a success */
if (close_ret == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If src does not exist or cannot be read - exit code 98.
 *              If dest cannot be created or written to - exit code 99.
 *              If dest or src cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
/* Declare variables */
int src, dest, read_bytes, write_bytes;
char *file_buffer;
/* Check for arguments */
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
/* Create buffer to read file */
file_buffer = create_buffer(argv[2]);
/* Open and raed source fileinto buffer */
src = open(argv[1], O_RDONLY);
read_bytes = read(src, file_buffer, 1024);
/* Open file */
dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
/* Loop source file to destination file */
do {
/* Check for errors in reading from source file */
if (src == -1 || read_bytes == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(file_buffer);
exit(98);
}
/* Write buffer contents to destination file */
write_bytes = write(dest, file_buffer, read_bytes);
/* Check for errors in writing to destination file */
if (dest == -1 || write_bytes == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(file_buffer);
exit(99);
}
/* Read source file into buffer */
read_bytes = read(src, file_buffer, 1024);
/* Append into destination file */
dest = open(argv[2], O_WRONLY | O_APPEND);
} while (read_bytes > 0);
/* Free, close and return file */
free(file_buffer);
close_file(src);
close_file(dest);
return (0);
}
