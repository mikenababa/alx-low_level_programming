#include "main.h"

/**
 * clear_bit - sets a bit at a given index to 0
 * @n: pointer to the number to change
 * @index: index of the bit to set to 0
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *number, unsigned int index)
{
/* varaiable declaration */
unsigned long int bit_mask;
/*  Check if the specified index is out of range */
if (index > 63)
return (-1);
/* Create a mask that has a single bit set to 1 at the specified index */
bit_mask = 1UL << index;
/* clear the bit at the specified index to 0 */
*number = (~(bit_mask) &*number);
/* return 1 as success */
return (1);
}
