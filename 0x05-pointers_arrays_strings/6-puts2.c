#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with
 * the first character.
 *
 * @str: Pointer to a string
 *
 * Return: void
 */
void puts2(char *str)
{
	int len = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
