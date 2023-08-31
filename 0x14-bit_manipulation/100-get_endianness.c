#include "main.h"

/**
 * get_endianness - this does check if a machine is little or big endian
 * Return: return 0 for big or 1 for little
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return (*c);
}
