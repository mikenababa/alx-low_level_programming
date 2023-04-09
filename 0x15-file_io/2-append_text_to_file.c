#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist or the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
/* Declare variables */
int file_descriptor;
int bytes_written;
int text_len = 0;
/* Check if filename is NULL */
if (filename == NULL)
return (-1);
/* Calculate length of text_content, if not NULL */
if (text_content != NULL)
{
while (text_content[text_len])
text_len++;
}
/* Open file and append */
file_descriptor = open(filename, O_WRONLY | O_APPEND);
/* Write text_content to the file */
bytes_written = write(file_descriptor, text_content, text_len);
/* Check if open() or write() failed */
if (file_descriptor == -1 || bytes_written == -1)
return (-1);
/* Close the file */
close(file_descriptor);
/* Return success */
return (1);
}
