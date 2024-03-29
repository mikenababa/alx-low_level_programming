#include "main.h"
#include <string.h>

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointer to a string of 0 and 1 chars
*
* Return: the converted number, or 0 if there is one or more chars
* in the string b that is not 0 or 1, or b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int decimal_number = 0, bit_value = 1;
int i;
if (b == NULL)
{
return (0);
}
for (i = strlen(b) - 1; i >= 0; i--)
{
if (b[i] == '1')
{
decimal_number += bit_value;
}
else if (b[i] != '0')
{
return (0);
}
bit <<= 1;
}
return (decimal_number);
}
