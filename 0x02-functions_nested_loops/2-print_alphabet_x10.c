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

	n = 0;

	while (n < 10)
	{
		ch = 'a';
		while (a <= 'z')
		{
			_putchar(ch);
			a++;
		}
		_putchar('\n');
		n++;
	}
}
