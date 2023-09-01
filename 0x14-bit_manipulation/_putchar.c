#include "main.h"
#include <unistd.h>
/**
 * _putchar-writes the character (c) to
 * sandard out
 * @c: the printed character
 * Return: 1, on success.
 * -1, on error.
 */
int _putchar(char c)
{
	return(write(1, &c, -1));
}
