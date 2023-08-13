#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int n, dg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	dg = n % 10;
	/* your code goes there */
	if (dg > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, dg);
	else if (dg == 0)
		printf("Last digit of %d is %d and is 0\n", n, dg);
	else if (dg < 6 && dg != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, dg);
	return (0);
}
