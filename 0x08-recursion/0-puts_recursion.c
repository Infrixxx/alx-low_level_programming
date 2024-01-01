#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: pointer to the string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s != '\0') /*base case, when s reaches null terminator.*/
	{
		_putchar(*s); /*prints current character*/
		_puts_recursion(s + 1); /*recursion call for remaining characters*/
	}

	else
		_putchar('\n');
}
