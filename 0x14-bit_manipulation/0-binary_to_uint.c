#include <stdio.h>
#include "main.h"

int _pow(int base, unsigned int exponent);

/**
 * binary_to_uint - convert a binary to decimal
 * @b: binary number input as a string of 0 and 1
 * Description: converts a binary number to an unsigned int
 * Return: the decimal number or 0 if b is null or b is invalid
 */
unsigned int binary_to_uint(const char *b)
{
        unsigned int decimal = 0, length;

        /* check string */
        if (b == NULL)
                return (0);

        /* string length */
        for (length = 0; b[length]; length++);

        /* loop over binary digits */
        while (*b)
        {
                if (*b == '1')
                        decimal += _pow(2, length - 1);
                else if (*b != '0')
                        return (0);
                b++;
                length--;
        }

        return (decimal);
}

/**
 * _pow - perform power
 * @base: base number
 * @exponent: exponent number
 * Description: custom power function (exponentiation) using loops
 * Return: integer
 */
int _pow(int base, unsigned int exponent)
{
        unsigned int i, result = 1;

        if (exponent == 0)
                return (1);

        for (i = 0; i < exponent; i++)
                result *= base;

        return result;
}
