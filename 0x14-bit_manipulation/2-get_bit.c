#include "main.h"

/**
 * get_bit - Retrieves the bit value at specific index within a decimal num
 * @n: refers to the number to search
 * @index: refers to the index of the bit
 *
 * Return: returns the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
