#include "main.h"

/**
 * _abs -to compute the absolute value of a number
 *
 * @r: the number to be computed
 *
 * Return: Always 0
 */
int _abs(int r)
{
if (r < 0)
{
r = (-1) * r;
return (r);
}
return (r);
}
