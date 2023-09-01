#include "main.h"

/**
 * int get_bit-a function that returns the
 * value of a bit at a given index.
 * @index: bit index you want to get.
 * @n: search value.
 * Return: -1 if error occurs,
 * the index when successful.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int getbit_value;

	if (index > 32)
		return (-1);

	getbit_value = (n >> index) & 1;

	return (getbit_value);
}
