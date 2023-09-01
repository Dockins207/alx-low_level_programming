#include "main.h"

/**
 * int clear_bit-function that sets the value of a bit to 0,
 * at a given index.
 * @index: index number.
 *Return: 1 if success,
 *-1 if error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		retun (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}
