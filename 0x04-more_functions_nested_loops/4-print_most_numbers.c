/*
 * File: 4-print_most_numbers.c
 * Auth: Boitumelo Rachoshi
 */

#include "main.h"

/**
 * print_most_numbers -prints the numbers, from 0 to 9
 * 
 * Return: 0
 */
void print_numbers(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		if (j != 50)
		{
			if (j != 52)
			{
			_putchar(j);
			}
		}
	}
	_putchar('\n');
}
