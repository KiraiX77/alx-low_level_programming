#include "main.h"

/**
 * clear_bit - Assigns a value of 0 to a specified bit position
 * @n: represents the pointer to the number we want to change
 * @index: refers to the index of the bit to remove
 *
 * Return: for successreturn 1 ,return -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
