#include "main.h"

/**
 * _strlen_recursion - string length calculator
 * @s : string with length to be determined
 * Return : length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return 0;
	else 
		return 1 + _strlen_recursions(s+1);
}
