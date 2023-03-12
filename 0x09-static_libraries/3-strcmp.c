#include "main.h"

/**
 * _strcmp - a function that compares two strings
 *
 * @s1: strng to be compared to string 2
 *
 * @s2: string to be compared to string 1
 *
 * Return: to return the result of the comparison
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
{
s1[i]++;
s2[i]++;
}
return (s1[i] - s2[i]);
}
