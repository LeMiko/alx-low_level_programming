#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Checks if a string is a palindrome using recursion.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	else
	{
		return (check_pal(s, 0, _strlen_recursion(s)));
	}
}

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * check_pal - Checks the characters recursively for palindrome.
 * @s: The string to check.
 * @i: Iterator.
 * @len: Length of the string.
 *
 * Return: 1 if the string is a palindrome, 0 if not.
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	else if (i >= len)
	{
		return (1);
	}
	else
	{
		return (check_pal(s, i + 1, len - 1));
	}
}
