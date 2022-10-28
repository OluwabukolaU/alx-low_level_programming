#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * at a given index
 * @n: integer
 * @index: index of bit
 *
 * Return: -1 if error or 1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index >= (sizeof(*n) * 8))
		return (-1);
	m = 1;
	*n = *n | (m << index);

	return (1);
}
