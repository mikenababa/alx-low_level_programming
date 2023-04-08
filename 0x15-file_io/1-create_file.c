#include "main.h"

/**
 * create_file - create  new file and write specified string to it
 * @filename: the name of the file to create
 * @text_content: the string to write to the file
 *
 * Return: If the function fails - -1.
 *         else - 1.
 */
int create_file(const char *filename, char *text_content)
{
/* Declare variables */
int file_descriptor, bytes_written, content_len = 0;
/* Check if filename is null */
if (filename == NULL)
return (-1);
/* If text_content is not null, calculate its length */
if (text_content != NULL)
{
for (content_len = 0; text_content[content_len];)
content_len++;
}
/* Open file with appropriate flags and permissions */
file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (file_descriptor == -1)
return (-1);
/* Write contents of text_content to file */
bytes_written = write(file_descriptor, text_content, content_len);
if (bytes_written == -1)
{
close(file_descriptor);
return (-1);
}
/* Close file and return success */
close(file_descriptor);
return (1);
}
