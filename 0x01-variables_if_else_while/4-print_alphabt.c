/*
 * File: 4-print_alphabt.c
 * Auth: Boitumelo C Rachoshi
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
    char ch='a';
    
    while(ch<='z')
    {
    ch!='e' && ch!='q';
    putchar(ch);
    ch++;
    }
    putchar('\n');
    return(0);
}
