#include "main.h"

/**
 * print_rev - Prints a string in reverse order.
 *
 * @s: Pointer to a string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;

	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
