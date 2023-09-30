#include <stdio.h>
#include "main.h"

/**
 * get_endianness - check the endianness of the system
 * Description: this function checks whether the system is big-endian
 * or little-endian by examining the least significant byte of
 * an unsigned integer.
 * Return:
 * 1 if the system is little-endian (LSB first).
 * 0 if the system is big-endian (MSB first).
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	/**
	 * If the least significant byte (byte[0]) contains 1,
	 * it's little endian. Otherwise, it's big endian
	 */

	return (byte[0] == 1);
}
