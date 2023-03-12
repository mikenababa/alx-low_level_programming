#include "main.h"

/**
 * _strstr - a function that locates a substring
 *
 * @haystack: a pointer to the string that a substring is to be located in
 *
 * @needle: a pointer to the substring to be located
 *
 * Return: to return a pointer to the beginning of the located substring
 * to return NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i] == needle[j])
{
return (needle);
}
}
}
return (0);
}
