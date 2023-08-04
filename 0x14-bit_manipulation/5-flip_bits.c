#include "main.h"

/**
* flip_bits - this does count the number of the bits to change
* to go from a number to another number
* @n: this is the first number
* @m: this is the second number
* Return: this gives the number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> j;
		if (current & 1)
			count++;
	}

	return (count);
}
