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
	char alp[26]="abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i=0; i<26; i++)
	{
		putchar(alp[i])
	}
	putchar('\n');
	return (0);
}
