#include "main.h"

/**
 * void print_binary - a function that,
 * print the binary representation of a number.
 *@n: argument
 *Return: binary representation of a number.
 */

void print_binary(unsigned long int n)
{
	int t;

	int counting = 0;

	for (t = 20; t >= 0; t--)
	{
		int curr = n >> t;

		if (curr & 1)
		{
			_putchar('1');
			counting++;
		}
		else if (counting)
			_putchar('0');
	}

	if (!counting)
		_putchar('0');
}
