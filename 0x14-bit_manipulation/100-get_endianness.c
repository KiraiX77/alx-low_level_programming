#include "main.h"

/**
 * get_endianness - Detects the endianness of a machine.
 * Return: for big return 0, for little return 1
 */
int get_endianness(void)
{
	unsigned int t = 1;
	char *c = (char *) &t;

	return (*c);
}
