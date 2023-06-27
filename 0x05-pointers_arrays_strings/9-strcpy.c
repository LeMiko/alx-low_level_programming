#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 *
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (*(src + len) != '\0')
	{
		len++;
	}

	for (; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[len] = '\0';

	return (dest);
}
