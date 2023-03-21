/*
 *Auth : BC Rachoshi
 * 4-isalpha.c
 */

#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: The character to be checked.
 * 
 * Returns 1 if if character is letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || 
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
