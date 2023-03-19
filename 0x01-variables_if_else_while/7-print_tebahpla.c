/*
 * File: 7-print_tebahpla.c
 * Auth: Boitumelo C Rachoshi
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* 7. Smile in the mirror*/

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */

int main(void)
{
    char lt='z';
    
    while(lt>'a'-1)
    {
    putchar(lt);
    lt--;
    }
    
    putchar('\n');
    return(0);
}
