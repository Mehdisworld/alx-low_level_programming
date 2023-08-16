#include "main.h"
/**
 * _isalpha - check if character is a letter, lowercase or uppercase
 *
 * @c: takes input from other functions
 *
 * Return: return 1 if c is true, else return 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
