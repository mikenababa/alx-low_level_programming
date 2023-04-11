#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @num1: first number
 * @num2: second number
 *
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
/* the XOR of num1 and num2 for diffrent bit */
unsigned long int bit_diff = num1 ^ num2;
/* Initialize bit count to 0 */
unsigned int bit_count = 0;
/* Loop through the bits of bit_diff */
while (bit_diff != 0)
{
/* least significant bit of bit_diff is 1, increment bit_count */
if (bit_diff & 1)
bit_count++;
/* Shift bit_diff one bit to the right */
bit_diff >>= 1;
}
/* Return the number of different bits */
return (bit_count);
}
