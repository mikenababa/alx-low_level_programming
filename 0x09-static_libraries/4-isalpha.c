#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c: the integer to be passed to the function
 *
 * Return: returns 1 if character is alphabet
 * and 0 if character is not
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
