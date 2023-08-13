#include<stdio.h>
/**
 * main - main function
 *
 * Description: print base16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int dg = 48;

	while (dg <= 102)
	{
		putchar(dg);

		if (dg == 57)
			dg += 39;
		dg++;
	}
	putchar('\n');
	return (0);
}
