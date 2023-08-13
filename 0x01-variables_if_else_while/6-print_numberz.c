#include<stdio.h>
/**
 * main - function
 *
 * Description: digits of base 10
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	
	return (0);
}
