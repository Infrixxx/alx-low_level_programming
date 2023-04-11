#include <stdio.h>
#include "main.h"

/**
 * main - print amount of arguments passsed to the program
 * @argc: argument(s) number
 * @argv: argument(s) array
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
