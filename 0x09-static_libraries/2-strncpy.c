#include "main.h"

/**
 * _strncpy - a function that copies a string
 *
 * @dest: a pointer to where the string will be copied
 *
 * @src: the source string to be copied
 *
 * @n: integer that controls the amount of bytes to be copied
 *
 * Return: to return a pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
int index;
for (index = 0; index < n && src[index] != '\0'; index++)
{
dest[index] = src[index];
}
while (index < n)
{
dest[index++] = '\0';
}
return (dest);
}
