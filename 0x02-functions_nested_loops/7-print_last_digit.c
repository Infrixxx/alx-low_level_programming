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
	
	int ld;
        ld= n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (ld);
}
