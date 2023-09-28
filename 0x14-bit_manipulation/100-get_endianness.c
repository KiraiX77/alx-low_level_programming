#include "main.h"

/**
 * get_endianness - Determines whether a machine operates in little-endian or big-endian.
 * Return: for big return 0, for little return 1
 */
int get_endianness(void)
{
	unsigned int t = 1;
	char *c = (char *) &t;

	return (*c);
}
