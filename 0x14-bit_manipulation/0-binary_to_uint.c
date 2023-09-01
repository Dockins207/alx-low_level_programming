#include "main.h"

/**
 * unsigned int binary_to_uint - a function
 * that converts binary to an unsigned integer.
 * @b: contant argument to be taken.
 * Return: unsigned int if success.
 * or 0 if not.
 * exit if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int Number = 0;
	int y = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (y = 0; y[b]; y++)
	{
		if (b[y] < '0' || b[y] > '1')
			return (0);
		Number = Number * 2 + (b[y] - '0');
	}

	return (Number);
}
