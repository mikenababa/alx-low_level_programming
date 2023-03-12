#include "main.h"

/**
 * _islower - function to check for lowercase character
 *
 * @c: parameter to pass characters and check if characters are lowercase
 *
 * Return: to return 1 if characer is lowercase
 * and return 0 is character is not lowercase
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
