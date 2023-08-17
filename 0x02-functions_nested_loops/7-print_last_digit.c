#include "main.h"

/**
 * print_last_digit - prints last digit on a number
 *
 * @n: number to extract last digit from
 *
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		a = -1 * (n % 10);
	else
		a = n % 10;

	_putchar(a + '0');
	return (a);
}
