#include <stdio.h>


/**
 * main -  checks for checks for a digit (0 through 9).
 * Return: Always 0.
 */
int main(void)
{
	int l;

	for (l = 1; l <= 100; l++)
	{
		if (l % 3 == 0 || l % 5 == 0)
		{
			if (l % 3 == 0)
			{
				printf("Fizz");
			}
			if (l % 5 == 0)
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d", l);
		}
		if (l != 100)
		{
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
