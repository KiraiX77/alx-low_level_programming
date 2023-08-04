#include "main.h"

/**
* set_bit - this does set a bit at a given index to one
* @n: this is the pointer to the number we want to change
* @index: this shows the index of the bit to set to 1
* Return: 1 for success, -1 for failure
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
