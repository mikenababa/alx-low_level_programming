#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @num: unsigned long int to convert to binary
 *
 * Return: void
 */
void print_binary(unsigned long int num)
{
/* declare variables and initialize */
int bit_pos;
/* check if 1 bit has been printed */
int bit_printed = 0;
unsigned long int bit_mask = 1;
/* fine appropriate bit position */
for (bit_pos = 63; bit_pos >= 0; bit_pos--)
{
if ((num >> bit_pos) & bit_mask)
{
_putchar('1');
bit_printed = 1; /* Set flag to indicate 1 bit has been printed */
}
else if (bit_printed)
{
_putchar('0');
}
}
/* If no 1 bits printed, print single 0 */
if (!bit_printed)
{
_putchar('0');
}
}
