/*
 * Auth :Boitumelo C Rachoshi
 * file : 0-strcat.c
 */

#include <stdio.h>
#include "main.h"
/**
 *_strcat - Write a function that concatenates two strings.
 *
 *@dest: This is the output string
 *@src: This is the input string
 *
 * Return: This returnas to dest, the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	for (a=0; dest[a]!='\0'; a++)
		for (b=0; src[b]!=0; b++)
		{ dest[a]=src[b];
			a++;
		}
	dest[a] = '\0';
	return(dest)
}
