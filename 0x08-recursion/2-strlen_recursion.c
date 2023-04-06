#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: measured string
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		n += _strlen_recursion(s + 1);
	}

	return (n);
}
