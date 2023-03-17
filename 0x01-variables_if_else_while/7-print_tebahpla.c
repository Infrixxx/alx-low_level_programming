/*
 * File: 7-print_tebahpla.c
<<<<<<< HEAD
 * Auth: Brennan D Baraban
=======
 * Auth: Boitumelo C Rachoshi
>>>>>>> 1feb6380d10352fd96f0925a8b16fd0c6c104bed
 */

#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
