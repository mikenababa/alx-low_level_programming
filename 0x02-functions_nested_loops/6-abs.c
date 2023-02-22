#include "main.h"

/**
 *_abs-prints the absolute value of an integer.
 *@a:the integer to compute its absolute value.
 *Return:returns the abs value.
 *
 */

int _abs(int a)
{
	int x = a;
	int absvalue;

	if (x < 0)
	{
		x = x * (-1);
	}
	absvalue = x;
	return (absvalue);
}
