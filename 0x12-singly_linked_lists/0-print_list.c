#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *head)
{
	size_t count = 0;

	while (head)
	{
		printf("%s\n", head->str);
		count++;
		head = head->next;
	}

	return (count);
}
