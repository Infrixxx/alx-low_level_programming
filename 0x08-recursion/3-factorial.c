#include "main.h"

/**
 * factorial - determines factorial of a number
 * @n: the number which will be used as factorial
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
