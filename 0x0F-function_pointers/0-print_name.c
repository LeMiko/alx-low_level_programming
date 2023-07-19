#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name using a pointer to function
 * @name: string to be printed
 * @f: pointer to function that prints a string
 *
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
