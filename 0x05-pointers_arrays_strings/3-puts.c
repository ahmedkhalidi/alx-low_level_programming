#include "main.h"

/**
 *  _puts - print string to stdout
 * @str: pointer to string.
 * Return: Always 0.
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
