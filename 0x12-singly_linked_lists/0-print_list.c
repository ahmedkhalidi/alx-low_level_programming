#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - check the code for Holberton School students.
 * @l: name of the list
 * Return: the number of nodes.
 */
size_t print_list(const list_t *l)
{
	int count = 0;

	while (l)
	{
		if (l->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", l->len, l->str);
		}
		count++;
		l = l->next;
	}
	return (count);
}

