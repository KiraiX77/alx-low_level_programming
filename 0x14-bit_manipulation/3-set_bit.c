#include "main.h"

/**
 * set_bit - Assigns a value of 1 to a specific bit position.
 * @n: refers to the pointer to the number we want to change
 * @index: refers to the index of the bit that will be set to 1
 *
 * Return: return 1 for success, return -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
