#include <unistd.h>
#include "variadic_funtions.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 */
int _putchar(char *c)
{
        return(write(1, &c, 1));
}
