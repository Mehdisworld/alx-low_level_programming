#include "main.h"
/**
 * swap_int - function swapping values
 * @a: variable to swab
 * @b: variable to swap
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
