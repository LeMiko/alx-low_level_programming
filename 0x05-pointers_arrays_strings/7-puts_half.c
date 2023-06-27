#include "main.h"

/**
 * puts_half - Prints the second half of a string, or the second half
 * starting from the middle character if the length is odd.
 *
 * @str: Pointer to a string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, n, len = 0;

	while (str[len] != '\0')
		len++;

	n = (len / 2);

	if ((len % 2) != 0)
		n = ((len + 1) / 2);

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
