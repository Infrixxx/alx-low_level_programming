#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: the size of the block to allocate
 * Return: p
 */

void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
