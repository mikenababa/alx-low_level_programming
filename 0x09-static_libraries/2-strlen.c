#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 *
 * @s: a pointer to the string that will be used in the function
 *
 * Return: to return the length of a string
 */
int _strlen(char *s)
{
int i;
for
(i = 0;
s[i] != '\0';
i++);
return (i);
}
