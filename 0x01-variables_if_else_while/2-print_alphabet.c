/*
 * File: 3-print_alphabets.c
 * Auth: Boitumelo C Rachoshi
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch = 'a';
	while (ch <= 'z')

	{
		printf(" %c", ch);
		ch++;
	}
	return 0;
}
