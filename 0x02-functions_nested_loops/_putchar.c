#include <unistd.h>
/**
 * We create a function that take one argument and writes it to standard output
 * _putchar writes character a to standart output(stdout)
 *  a : character to print
 *  Return (1) success
 *  Return (-1) error
 */
int _putchar(char a)
{
	return (write(1,&a,1));
}
