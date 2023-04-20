#include "3-calc.h"

/**
 * get_op_func - Get the operator and redirect to the function.
 * @s: The operator.
 *
 * Description: This function receives a string representing an operator
 * and returns a pointer to the corresponding function that executes
 * the operation. If the operator is not recognized, it returns NULL.
 *
 * Return: A pointer to the function that executes the operation, or NULL
 * if the operator is not recognized.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && strcmp(ops[i].op, s) != 0)
		i++;

	return (ops[i].f);
}
