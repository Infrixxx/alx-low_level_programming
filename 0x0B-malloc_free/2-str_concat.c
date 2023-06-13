#include "main.h"

/**
 * char *str_concat-  function that concatenates two strings.
 * @s1: string to be concatenated.
 * @s2: string to be concatenated.
 * Return: retunr pointer should point to a newly allocated space in memory.
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	size_t s1_length = 0;
	size_t is2_length = 0;
	size_t s3_length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_length = strlen(s1);
	s2_length = strlen(s2);
	s3_length = s1_length + s2_length + 1;
	s3 = malloc(s3_length * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	strcpy(s3, s1);
	strcat(s3, s2);
}
