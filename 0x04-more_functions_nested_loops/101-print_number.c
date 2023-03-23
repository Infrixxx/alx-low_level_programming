/*
 * File: 101-print_number.c
 * Auth: Boitumelo Rachoshi
 */

include "main.h"
/**
 * print_number - Function that prints an integer.
 * @n: int type number
 * Description: Can only use _putchar to print.
 */
void print_number(int n)
{
<<<<<<< HEAD
	long m; /* power of 10 */
	int c; /* boolean check */
	long num; /* convert int to long */
=======
	unsigned int num = n;
>>>>>>> 63dc05d11e75a3b99ed435b3a8e1fc78555dc9c0

	num = n;
	/* negatives */
	if (num < 0)
	{
		num *= -1;
		_putchar('-');
<<<<<<< HEAD
	}

	/* count up */
	m = 1;
	c = 1;
	while (c)
	{
		if (num / (m * 10) > 0)
			m *= 10;
		else
			c = 0;
	}

	/* count down */
	while (num >= 0)
	{
		if (m == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
		}
		else
		{
			_putchar((num / m % 10) + '0');
			m /= 10;
		}
	}
=======
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
>>>>>>> 63dc05d11e75a3b99ed435b3a8e1fc78555dc9c0
}
