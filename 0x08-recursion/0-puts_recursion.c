#inlcude "main.h"

/**
 * void _puts_recursion - prints a string, followed by a new line.
 * Return : 0
 */

void _puts_recursion(char *s)
{
	while (*s != '/0')
	{
		_putchar(*s);
		*s++;
	}
	_putchar(*s);
}
