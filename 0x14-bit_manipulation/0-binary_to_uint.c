#include "main.h"

void print_binary(unsigned long int decimal)
{
    int i, count = 0;
    unsigned long int current;

    for (i = 63; i >= 0; i--)
    {
        current = decimal >> i;

        if (current & 1)
        {
            _putchar('1');
            count++;
        }
        else if (count)
            _putchar('0');
    }

    if (!count)
        _putchar('0');
}
