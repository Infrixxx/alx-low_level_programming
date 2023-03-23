#include "main.h"

/**
 * print_triangle -  checks for checks for a digit (0 through 9).
 * @size: size -  Variable
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int y, z;

	if (size > 0)
	{
		for (y = 1; y <= size; y++)
		{
			for (z = 1; z <= size; z++)
			{
				if (z <= size - y)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
