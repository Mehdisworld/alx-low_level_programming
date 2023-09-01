#include "main.h"
/**
 * _strlen - function that returns lengh of a string
 * @s: string
 * Return: string lengh
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		++count;

	return (count);
}
