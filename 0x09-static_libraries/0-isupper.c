#include "main.h"

/**
 * _isupper - function to check for uppercase character
 *
 * @c: the variable to be checked
 * Return: to return 1 if character if uppercase
 * and to return 0 if character is lowercase.
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
