#include <unistd.h>
#include "main.h"

/**
 * _putchar - write character c to stdout
 * @c: The character to be written
 * Return: On success 1
 *       : On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
