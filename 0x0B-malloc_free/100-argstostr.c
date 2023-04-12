#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: arguments number
 * @av: argument variables
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int a, b, e, d;

	if (ac == 0)
		return (NULL);
	if (av == 0)
		return (NULL);
	a = 0;
	for (b = 0; b < ac; b++)
	{
		for (e = 0; av[b][e] != '\0'; e++)
			a++;
		a++;
	}
	a++;
	str = malloc(a * sizeof(char));
	if (str == 0)
		return (NULL);
	d = 0;
	for (b = 0; b < ac; b++)
	{
		for (e = 0; av[b][e] != '\0'; e++)
		{
			str[d++] = av[b][e];
		}
		str[d++] = '\n';
	}
	str[d] = '\0';
	return (str);
}
