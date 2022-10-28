#include "main.h"

/**
 * flip_bits - counts num of bits to be flipped
 * to get from one number to another
 * @n: number to be flipped
 * @m: number to flip to
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}

