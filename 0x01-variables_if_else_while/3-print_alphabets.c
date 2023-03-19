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
char coh = 'a';
char ch = 'A';

while(coh<='z')
{
putchar(coh);
coh++;
}


while(ch<='Z')
{
putchar(ch);
ch++;

}
putchar('\n');
return(0);
}

