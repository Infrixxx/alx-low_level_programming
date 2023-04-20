#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints the opcodes of its own main function
 * @n: number of bytes to print
 */
void print_opcodes(int n)
{
	char *addr = (char *)print_opcodes;
	int i;

	for (i = 0; i < n; i++)
		printf("%02x ", addr[i] & 0xff);
	printf("\n");
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 if argc is incorrect, 2 if n is negative
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(n);

	return (0);
}
