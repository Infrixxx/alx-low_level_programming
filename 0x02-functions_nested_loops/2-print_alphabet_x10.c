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
	int n=0;
	char a='a';

	while (n < 11)
		{
			while ('a' <= 'z')
			{
				_putchar('a');
				a++;
			}
			n++;
		}
	_putchar('\n');

}
