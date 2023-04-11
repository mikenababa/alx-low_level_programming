#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @binary_string: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars
 *         string binary_string not 0 or 1, or binary_string is NULL
 */
unsigned int binary_to_uint(const char *binary_string)
{
/* Initialize result and bit */
unsigned int result = 0, bit = 1;
/* Initialize index variable */
int index;
/* Check if binary_string is NULL */
if (binary_string == NULL)
return (0);
/* Loop through the string backwards */
for (index = strlen(binary_string) - 1; index >= 0; index--)
{
/* If the current character is '1', add bit to the result */
if (binary_string[index] == '1')
result += bit;
/* If the current character is not '0', return 0 */
else if (binary_string[index] != '0')
return (0);
/* Shift bit left by 1 */
bit <<= 1;
}
/* Return the result */
return (result);
}
