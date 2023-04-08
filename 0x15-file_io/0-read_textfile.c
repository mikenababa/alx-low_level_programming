#include "main.h"

/**
 * read_textfile - reads a text file and prints its contents to stdout
 * @filename: the name of the file to read
 * @num_letters: the number of letters to read from the file
 *
 * Return: the number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t num_letters)
{
/* I declare my variables */
int file_descriptor, num_bytes_read, num_bytes_written;
char *file_contents_buffer;
/* I check if filename is null */
if (filename == NULL)
return (0);
/* Allocate memory for file*/
file_contents_buffer = malloc(sizeof(char) * num_letters);
if (file_contents_buffer == NULL)
return (0);
/* Open file */
file_descriptor = open(filename, O_RDONLY);
if (file_descriptor == -1)
{
free(file_contents_buffer);
return (0);
}
/* Read file into buffer */
num_bytes_read = read(file_descriptor, file_contents_buffer, num_letters);
if (num_bytes_read == -1)
{
free(file_contents_buffer);
close(file_descriptor);
return (0);
}
/* Write file contents to stdout */
num_bytes_written = write(STDOUT_FILENO, file_contents_buffer, num_bytes_read);
if (num_bytes_written == -1 || num_bytes_written != num_bytes_read)
{
free(file_contents_buffer);
close(file_descriptor);
return (0);
}
free(file_contents_buffer);
close(file_descriptor);
return (num_bytes_written);
}
