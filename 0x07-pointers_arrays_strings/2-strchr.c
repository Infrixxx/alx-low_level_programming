#include <stdio.h>
/**
 * _strchr - Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
 *
 * @s: string to be checked
 * @c: character to find in s
 *
 * Return: pointer to first instance of c, otherwise NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return (NULL);
}
