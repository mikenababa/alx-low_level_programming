#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: a pointer to a string
 *
 * @accept: a string
 *
 * Return: to return the number of bytes in the initial segment of @s
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, count;
count = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[count])
count++;
}
}
return (count);
}
