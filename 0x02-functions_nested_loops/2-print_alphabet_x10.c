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
	

	while (n < 11)
		{
			char a='a';
			while ('a' <= 'z')
			{
				_putchar('a');
				a++;
			}
			_putchar('\n');
			n++;
		}
}
