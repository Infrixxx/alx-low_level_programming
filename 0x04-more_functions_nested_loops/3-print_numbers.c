/*
 * File: 3-print_numbers.c
 * Auth: Boitumelo Rachoshi
 */

#include "main.h"

/**
 * print_numbers -prints the numbers, from 0 to 9
 * 
 * Return: ALways 0.
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
