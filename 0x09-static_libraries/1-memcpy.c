#include "main.h"

/**
 * _memcpy - a function that copies memory area
 *
 * @dest: a pointer to the destination for the memory area to be copied
 *
 * @src: a pointer to the source from which the memory is copied
 *
 * @n: the number of bytes to be copied
 *
 * Return: to return the pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char *csrc = src;
char *cdest = dest;
for (i = 0; i < n; i++)
cdest[i] = csrc[i];
return (cdest);
}
