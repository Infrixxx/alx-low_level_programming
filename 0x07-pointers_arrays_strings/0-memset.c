/**
 * _memset - fills n bytes of memory
 *
 * @s: pointer to start of memory area
 * @b: constant byte to fill with
 * @n: num bytes to fill in
 *
 * Return: pointer to beginning of memory area s
 */
char *_memset(char *a, char b, unsigned int n)
{
	unsigned int i = 0;
	char *beg = a;

	while (i < n)
	{
		*a++ = b;
		i++;
	}
	return (beg);
}
