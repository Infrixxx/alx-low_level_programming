#include "3-calc.h"
/**
 * main - Entry point
 * @argc: the number of the arguments
 * @argv: the arguments in the format number operator number
 *
 * Description: This program is the entry point for a simple calculator.
 * Section Header: 3-calc.h
 *
 * Return: 0 in success
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = func(num1, num2);

	printf("%d\n", result);
	return (0);
}
