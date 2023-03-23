/*
 * File: 3-print_numbers.c
 * Auth: Boitumelo Rachoshi
 */

#include "main.h"

/**
 * print_numbers -  checks for checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
