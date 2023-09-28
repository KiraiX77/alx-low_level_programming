#include "main.h"

/**
 * flip_bits - Calculates the count of bits requiring alteration
 * to get from one number to another
 * @n: refers to the first number
 * @m: refers to the second number
 *
 * Return: returns the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int t, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (t = 63; t >= 0; t--)
	{
		current = exclusive >> t;
		if (current & 1)
			count++;
	}

	return (count);
}
