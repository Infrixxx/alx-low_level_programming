/*
*Author :BC Rachoshi
*2-print_alphabet_x10.c
*/

#include "main.h"
/*
 * Author:BC Rachoshi
 *2-print_alphabet_x10.c
 *
 */

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	char a;
	int n;

	for (n= 0; n <= 9; n++)
	{
		for (a='a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		n++;
	}
}
