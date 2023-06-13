#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: specific character to be initialized with.
 * Return: char pointer to malloc
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(*a));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
