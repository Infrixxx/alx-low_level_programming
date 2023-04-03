/**
 * Auth : Boitumelo C Rachoshi
 * file : 0-memset.c
 *
 */
#include "main.h"
/**
 * _memset - function fills the first n bytes of the memory area pointed to by s with the constant byte b
 * @s : points to the memory we printing to.
 * @b : the constant byte we printing to memory
 * @n : size of bytes to fill
 *
 * Return : a pointer to the memory area s
 */
 char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;
	char *beg = t;

	while (a < n)
	{
		*t++ = b;
		a++;
	}
	return (beg);
}
