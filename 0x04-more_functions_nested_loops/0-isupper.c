/**
 * Auth : BC Rachoshi
 * File : 0-isupper.c
 */

#include "main.h"

/**
 * _isupper - Checks for uppercase characters.
 * @c: The character to be checked.
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z' )
	return (1);
	else
	return (0);
}
