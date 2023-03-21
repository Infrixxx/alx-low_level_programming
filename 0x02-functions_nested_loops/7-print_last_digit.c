/*
 * File: 7-print_last_digit.c
 * Auth: Boitumelo Rachoshi
 */

/**
 * print_last_digit - prints the last digit of a number
 * @n : The number of which the last digit will be printed.
 *
 * Return : value of the last digit
 */
int print_last_digit(int n)
{
	int l = n%10;
	if (l < 0)
		l*= -1;

	_putchar(l + '0');
	return(l);
}
