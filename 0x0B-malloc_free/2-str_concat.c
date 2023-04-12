#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)

{
	char *a;
	int b, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
		b = c = 0;
	while (s1[b] != '\0')
		b++;
	while (s2[c] != '\0')
		c++;
	a = malloc(sizeof(char) * (b + c + 1));
	if (a == NULL)
		return (NULL);
	b = c = 0;
	while (s1[b] != '\0')
	{
		conct[b] = s1[b];
		b++;
	}
	while (s2[c] != '\0')
	{
		conct[b] = s2[c];
		b++, c++;
	}
	conct[b] = '\0';
	return (a);
}
