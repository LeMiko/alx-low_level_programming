#include "main.h"

/**
 * print_array - Prints n elements of an integer array.
 *
 * @a: Pointer to an integer array
 * @n: Number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}

	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}

	printf("\n");
}
