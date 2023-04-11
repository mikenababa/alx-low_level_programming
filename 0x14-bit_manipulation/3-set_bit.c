#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: pointer to the number to set
 * @index: index of the bit to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *number, unsigned int index)
{
/* Variable declaration */
unsigned long int mask_value;
/* Check if the specified index is out of range */
if (index > 63)
return (-1);
/* Create mask that has a single bit set to 1 */
mask_value = 1 << index;
/* set the bit at the specified index to 1 */
*number = *number | mask_value;
/* Return 1 as success */
return (1);
}
