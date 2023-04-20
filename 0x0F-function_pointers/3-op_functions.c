#include "3-calc.h"

/**
 * op_add - Adds two integers
 * @num1: First integer
 * @num2: Second integer
 *
 * Return: Result of the addition operation
 */
int op_add(int num1, int num2)
{
	return (num1 + num2);
}

/**
 * op_sub - Subtracts two integers
 * @num1: First integer
 * @num2: Second integer
 *
 * Return: Result of the subtraction operation
 */
int op_sub(int num1, int num2)
{
	return (num1 - num2);
}

/**
 * op_mul - Multiplies two integers
 * @num1: First integer
 * @num2: Second integer
 *
 * Return: Result of the multiplication operation
 */
int op_mul(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * op_div - Divides two integers
 * @num1: First integer
 * @num2: Second integer
 *
 * Return: Result of the division operation
 */
int op_div(int num1, int num2)
{
	if (num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (num1 / num2);
}

/**
 * op_mod - Gets the modulus of two integers
 * @num1: First integer
 * @num2: Second integer
 *
 * Return: Result of the modulus operation
 */
int op_mod(int num1, int num2)
{
	if (num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (num1 % num2);
}
