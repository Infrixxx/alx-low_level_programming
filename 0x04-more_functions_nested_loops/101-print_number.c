include "main.h"


/**
 * print_number - Function that prints an integer.
 * @n: int type number
 */
void print_number(int n)
{
	long a; /* power of 10 */
	int b; /* boolean check */
	long c; /* convert int to long */

	c = n;
	/* negatives */
	if (c < 0)
	{
		c *= -1;
		_putchar('-');
	}

	/* count up */
	m = 1;
	b = 1;
	while (b)
	{
		if (c / (a * 10) > 0)
			a *= 10;
		else
			b = 0;
	}

	/* count down */
	while (c >= 0)
	{
		if (a == 1)
		{
			_putchar(c % 10 + '0');
			c = -1;
		}
		else
		{
			_putchar((c / a % 10) + '0');
			m /= 10;
		}
	}
}
