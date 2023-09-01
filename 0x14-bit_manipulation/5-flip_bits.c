#include "main.h"

/**
 * unsigned int flip_bits- a function that tuns the,
 * number of bits.
 * @m: argument vector.
 * @n: argument count.
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int h;
	int count = 0;
	unsigned long int curr;

	unsigned long int exc = n ^ m;

	for (h = 0; h < 64; h++)
	{
		curr = exc >> h;

		if (curr & 1)
			count++;
	}

	return (count);
}
