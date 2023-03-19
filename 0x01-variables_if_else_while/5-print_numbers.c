/*
 * File: 5-print_numbers.c
 * Auth: Boitumelo C Rachoshi
 */

#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */
int main(void)
{
int n=0;

while (n<10)
{
printf("%d",n);
n++;
}
putchar('\n');
return (0);
}
