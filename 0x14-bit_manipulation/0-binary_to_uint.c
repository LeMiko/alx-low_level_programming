#include "main.h"

unsigned int binary_to_unit(const char *binary_string)
{
    int i;
    unsigned int decimal_value = 0;

    if (!binary_string)
        return (0);

    for (i = 0; binary_string[i]; i++)
    {
        if (binary_string[i] < '0' || binary_string[i] > '1')
            return (0);
        decimal_value = 2 * decimal_value + (binary_string[i] - '0');
    }

    return (decimal_value);
}

