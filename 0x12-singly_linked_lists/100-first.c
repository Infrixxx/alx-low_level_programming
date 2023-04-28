#include <stdio.h>

void __attribute__((constructor)) calledFirst();

/**
 * calledFirst - Prints "You're beat! and yet, you must allow,\n"
 *                "I bore my house upon my back!\n"
 *
 * Return: Nothing
 */
void calledFirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
