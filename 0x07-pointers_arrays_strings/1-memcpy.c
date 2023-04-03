#include "main.h"
/**
 *_memcpy - function copies n bytes from memory area src to memory area dest
 *
 * @dest: pointer to dest str
 * @src: source to be copied from
 * @n: num bytes to copy from src
 *
 * Return: pointer to beginning of memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *beg = dest;

	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}
	return (beg);
}
