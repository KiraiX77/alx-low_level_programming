#include "main.h"

/**
 * get_endianness - this helps us check if a machine is big or little endian
 * Return: gives 0 for big, gives 1 for little
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return (*c);
}
