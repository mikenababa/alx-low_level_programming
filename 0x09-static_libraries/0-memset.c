#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 *
 * @s: a pointer to the memory area
 *
 * @b: a character that fills the memory
 *
 * @n: the number of bytes to be filled
 *
 * Return: to return a pointer to the filled memory
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
char *ch = s, value = b;
for (i = 0; i < n; i++)
ch[i] = value;
return (ch);
}
