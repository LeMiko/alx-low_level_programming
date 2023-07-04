#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the null-terminated string to be scanned.
 * @accept: Pointer to the null-terminated string containing the characters to
 *          match.
 *
 * Return: The length of the initial segment of @s which consists entirely of
 *         characters in @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
