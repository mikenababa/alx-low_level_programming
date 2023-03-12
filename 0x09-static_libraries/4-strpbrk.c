#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 *
 * @s: a pointer to the string to be searched for
 *
 * @accept: a pointer to a string where the first occurrence
 * of the string @s will be searched
 *
 * Return: a pointer to the byte in @s that matches one of the bytes in @accept
 * to return NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}
return (0);
}
