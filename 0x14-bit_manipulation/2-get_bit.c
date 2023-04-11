#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: the number to get the bit from
 * @index: the index of the bit to get, starting from 0
 *
 * Return: the value of the bit at the given index, or -1 if an error occurs
 */
int get_bit(unsigned long int number, unsigned int index)
{
/* declare variables */
unsigned long int bit_mask;
/* Values of bit at specified index */
int bit_value;
/* confirm if specified index is out of range */
if (index > 63)
return (-1);
/* Create a mask, set to 1 at specified index */
bit_mask = 1UL << index;
/* when bit is 1, bit_mask will be returned */
/* when bit is 0, bit_mask will be returned */
bit_value = (number & bit_mask) ? 1 : 0;
/* return bit value at index */
return (bit_value);
}
