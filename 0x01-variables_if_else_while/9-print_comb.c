#include<stdio.h>

/**
 * main - main function
 *
 * Description: print 0,1 - 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int dg = 0;

	while (dg <= 9)
	{
		putchar(dg + 48);

		if (dg != 9)
		{
			putchar(',');
			putchar(' ');
		}
		dg++;
	}
	putchar('\n');

	return (0);
}
