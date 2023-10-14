#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
    int i, j, k;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j <= 14; j++)
        {
            k = j;
            if (k > 9)
            {
                k = k / 10;
                _putchar(k + '0');
            }
            k = j % 10;
            _putchar(k + '0');
        }
        _putchar('\n');
    }
}

