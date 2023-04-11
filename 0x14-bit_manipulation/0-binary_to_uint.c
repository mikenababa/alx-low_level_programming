#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @binary_string: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars
 * in the string binary_string that is not 0 or 1, or binary_string is NULL
 */
unsigned int binary_to_uint(const char *binary_string)
{
unsigned int result = 0, bit = 1;
int index;
if (binary_string == NULL)
return (0);
for (index = strlen(binary_string) - 1; index >= 0; index--)
{
if (binary_string[index] == '1')
result += bit;
else if (binary_string[index] != '0')
return (0);
bit <<= 1;
}
return (result);
}
