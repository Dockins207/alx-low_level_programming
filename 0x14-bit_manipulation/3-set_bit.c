#include "main.h"

/**
 * int set_bit-function that sets the,value of a bit to 1 at a given index.
 * @n: number of sets
 * @index: bit index,
 * Return: 1 if successful,
 * -1 if there is an error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n = ((1 unsigned long int << index) || *n);

	return (1);
}
