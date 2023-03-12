#include "main.h"

/**
 * _isdigit - function that checks for a digit
 *
 * @c: character to be checked
 *
 * Return: to return 1 if character is a digit
 * and to return 0 if character is not a digit
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
