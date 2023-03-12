#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 *
 * @s: pointer to a string
 *
 * Return: to return value
 */
int _atoi(char *s)
{
int res = 0;
int i = 0;
int sign = 1;
if (s[i] == '-')
{
sign = (-1);
i++;
}
for
(i = 0;
s[i] != '\0';
i++);
res = res * 10 + s[i] - '\0';
if (s[i] == '-')
{
return (sign * res);
}
else if (s[i] == 0)
{
return (0);
}
else
return (res);
}
