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

	for (j = 0; j < 10; j++)
	{
		if (j != 2)
		{
			if (j != 4)
			{
			_putchar(j);
			}
		}
	}
	_putchar('\n');
}
