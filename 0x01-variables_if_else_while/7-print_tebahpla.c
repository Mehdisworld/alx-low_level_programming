#include<stdio.h>
/**
 * main - main function
 *
 * Description: print a-z reversed
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
