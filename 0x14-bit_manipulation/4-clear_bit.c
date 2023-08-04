#include "main.h"

/**
* clear_bit - this does set the value of a bit to 0
* @n: this is the pointer to the number we want to change
* @index: this is the index of the bit to clear
* Return: for success give1 , and give -1 for failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
