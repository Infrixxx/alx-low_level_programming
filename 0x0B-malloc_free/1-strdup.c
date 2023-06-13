#include "main.h"

/**
 * _strdup -returns a pointer to a newly allocated space in memory.
 * @str : sring to be copied.
 * Return : char pointer to malloc created memory address
 */

char *_strdup(char *str)
{
	char *a;

	if (str == NULL)
		return (NULL);
	a = malloc((strlen(str) + 1) * sizeof(*a));
	if (a == NULL)
		return (NULL);
	return (a = str);
}
