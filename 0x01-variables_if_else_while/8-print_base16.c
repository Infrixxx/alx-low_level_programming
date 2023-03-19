/*
 * File: 8-print_base16.c
 * Auth: Boitumelo C Rachoshi
 */

#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
int num = 0;
char letter = 'a';

while ( num < 10)
{
	putchar((num % 10) + '0');
	num++;}

while ( letter <= 'f')
{	putchar(letter);
	letter++;}

putchar('\n');

return (0);
}
