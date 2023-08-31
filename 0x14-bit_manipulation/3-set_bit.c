#include "main.h"

/**
 * set_bit - this does set a bit to 1 at a given index
 * @n: this refers to a pointer to the number to change
 * @index: this refers to the index of the bit to set to 1
 *
 * Return: returns 1 for success or -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
