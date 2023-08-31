#include "main.h"

/**
 * flip_bits - this does count the number of bits to change
 * in order to get from one number to another
 * @n: refers to the first number
 * @m: refers to the second number
 *
 * Return: returns the number of bits to change
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
