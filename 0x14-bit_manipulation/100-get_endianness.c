#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 *
 * Returns:
 * 0 if the system is big endian
 * 1 if the system is little endian
 */
int get_endianness(void)
{
/* declare and initialize variable */
unsigned int num = 1;
/* pointer to a character variable */
char *byte_ptr = (char *)&num;
/* value of the first byte pointed to by byte_ptr is 1 */
if (*byte_ptr == 1)
{
/* return 1, indicate system is litle endian */
return (1);
}
/*if value of first byte is not 1 */
else
return (0);
}
