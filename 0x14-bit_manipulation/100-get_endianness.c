#include "main.h"

/**
 * int get_endianness-a function that checks the endianness.
 * Return: 0 if big endian.
 * 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int f = 1;
	char *c = (char *)&1;

	return  (*c);
}
