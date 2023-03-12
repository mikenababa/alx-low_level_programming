#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *
 * @dest: a pointer to the string to be concatenated
 *
 * @src: the source string to be added
 *
 * @n: an integer controlling the amount of bytes to be added
 *
 * Return: to return a pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len, index;
dest_len = 0;
while (dest[dest_len] != '\0')
{
dest_len++;
}
index = 0;
while (index < n && src[index] != '\0')
{
dest[dest_len] = src[index];
index++;
dest_len++;
}
return (dest);
}
