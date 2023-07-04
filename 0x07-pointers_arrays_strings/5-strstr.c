#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to the null-terminated string to be searched.
 * @needle: Pointer to the null-terminated string to search for.
 *
 * Return: A pointer to the beginning of the located substring, or NULL if the
 *         substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
